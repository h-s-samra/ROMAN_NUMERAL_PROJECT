# --------------- Makefile Log --------------------
#
# 02/04/2017	HSamra	Initial Commit
#
# -------------------------------------------------

# compiler type (gcc=c / g++=c++)
CC = gcc

# compiler flags
CFLAGS = -c

exec_all: all run clean

all: roman_numeral_project increment

roman_numeral_project: main.o rmn_calc.o test_rmn_calc_regex.o test_rmn_calc_enc_dcd.o
	$(CC) main.o rmn_calc.o test_rmn_calc_regex.o test_rmn_calc_enc_dcd.o -o test_exe

main.o: main.c
	$(CC) $(CFLAGS) main.c

rmn_calc.o: rmn_calc.c
	$(CC) $(CFLAGS) rmn_calc.c
	
test_rmn_calc_regex.o: test_rmn_calc_regex.c
	$(CC) $(CFLAGS) test_rmn_calc_regex.c

test_rmn_calc_enc_dcd.o: test_rmn_calc_enc_dcd.c
	${CC} ${CFLAGS} test_rmn_calc_enc_dcd.c
	
run:
	./test_exe

clean:
	rm -rf *o test_exe

increment:
	./inc_bld_str.sh
	
open:
	./openfiles.sh
	