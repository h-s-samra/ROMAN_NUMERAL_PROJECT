#!/bin/bash

# --------------- inc_bld_str.sh log ---------------
#
# 02/06/2017	HSamra	Initial Commit
#
# --------------------------------------------------

#variables:
PATH="/home/hsamra/c_devel/ROMAN_NUMERAL_PROJECT/"
FILE="bld_num.txt"
NUM=9999 # default value (should never reach this)
STR=""

#code:
#-look for file.  If not found then create it
if [ ! -e $PATH$FILE ]
then
	echo creating file...
	cd $PATH
	> $FILE
fi

#-get number from file
#--without the use of "10#" the number is read as
#--an octal number but will crash at "0008" since
#--it is too large to be an octal number.  Prefix
#--"10#" converts the number into decimal form so
#--we can continue to work with it
while IFS='' read -r line || [[ -n "$line" ]]
do
	NUM="10#$line"
done < $FILE

#-increment
(( NUM++ ))

#--the largest number we want to keep is 9999
if [ $NUM -gt 9999 ] 
then
	(( NUM = 0 ))
fi

#-write new number to $FILE
printf -v STR "%04d" $NUM
echo $STR > $FILE

#-print new number
echo build number: $STR
