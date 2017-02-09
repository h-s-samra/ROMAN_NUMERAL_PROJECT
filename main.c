// --------------- main.c Log --------------------
//
// 02/04/2017	HSamra	Initial Commit
// 02/06/2017	HSamra	Added functionality for displaying version number on startup
// 02/06/2017	HSamra	Adding functionality for string verification testing
// 02/08/2017	HSamra	Adding functionality for encoding integer to roman numerals
//
// -------------------------------------------------

#include "common.h"
#include "test_rmn_calc.h"

const char filename[] = {"bld_num.txt"};
byte vrsn_mjr = 0x01;
byte vrsn_mnr = 0x00;
char vrsn_rls = 'A' - 0;
char vrsn_bld[8];

byte _read_buildNum(char *str)
{
	FILE *file = fopen(filename, "r");
	
	if(file == NULL)
	{
		printf("\r\nError: Failed to open %s", filename);
	}
	
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
	// initialize regex
	if(!RMN_init())
	{
		return 0;
	}
	
	if(!_read_buildNum(vrsn_bld))
	{
		return 0;
	}
	
#ifdef RMN_CALC_TEST
	TEST_rmn_calc_test_regex();
	printf("\r\n");
	TEST_rmn_calc_test_enc_dcd();
	
	
	printf("Version: v%d.%d%c.%s\r\n\n", vrsn_mjr, vrsn_mnr, vrsn_rls, vrsn_bld); // HSS_Debug: for displaying version number at bottom of test
#else
	
#endif // RMN_CALC_TEST
	
	
	return 0;
}
