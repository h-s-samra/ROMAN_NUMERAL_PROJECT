// --------------- main.c Log --------------------
//
// 02/04/2017	HSamra	Initial Commit
//
// -------------------------------------------------

#include <stdio.h>
#include <string.h>
#include "common.h"

const char filename[] = {"bld_num.txt"};
byte vrsn_mjr = 0x01;
byte vrsn_mnr = 0x00;
char vrsn_rls = 'A' - 0;
char vrsn_bld[8];

byte _read_buildNum(char *str)
{
	FILE *file = fopen(filename, "r");
	
	memset(vrsn_bld, 0x00, sizeof(vrsn_bld));
	
	if(!fgets(str, sizeof(str), file))
	{
		printf("\r\nError: Failed to read build number");
		return 0;
	}
	
	fclose(file);
	
	printf("\r\nRoman Numeral Calculator\r\n");
	printf("Version: v%d.%d%c.%s\r\n\n", vrsn_mjr, vrsn_mnr, vrsn_rls, vrsn_bld);
}

int main(void)
{
	if(!_read_buildNum(vrsn_bld))
	{
		return 0;
	}
	
	
	return 0;
}