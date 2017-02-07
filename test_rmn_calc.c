// --------------- test_rmn_calc.c Log --------------------
//
// 02/06/2017	HSamra	Initial Commit
// 02/06/2017	HSamra	Adding tests for regex comparisons
//							- added tests for i and I (min: 0, max: 3)
//							- added tests for v and V (min: 0, max: 1)
//							- added tests for vi
//
// --------------------------------------------------------

#include <assert.h>
#include "common.h"

void _regex_verifyI_pass(char *str)
{
	printf("Test_regex_verifyI_pass(%s): ", str);
	
	assert(RMN_verify_string(str) == 1);
	
	printf("PASS\r\n");
}

void _regex_verifyI_fail(char *str)
{
	printf("Test_regex_verifyI_fail(%s): ", str);
	
	assert(RMN_verify_string(str) == 0);
	
	printf("PASS\r\n");
}

void _regex_verifyV_pass(char *str)
{
	printf("Test_regex_verifyV_pass(%s): ", str);
	
	assert(RMN_verify_string(str) == 1);
	
	printf("PASS\r\n");
}

void _regex_verifyV_fail(char *str)
{
	printf("Test_regex_verifyV_fail(%s): ", str);
	
	assert(RMN_verify_string(str) == 0);
	
	printf("PASS\r\n");
}

void _regex_verifyX_pass(char *str)
{
	printf("Test_regex_verifyX_pass(%s): ", str);
	
	assert(RMN_verify_string(str) == 1);
	
	printf("PASS\r\n");
}

void _regex_verifyX_fail(char *str)
{
	printf("Test_regex_verifyX_fail(%s): ", str);
	
	assert(RMN_verify_string(str) == 0);
	
	printf("PASS\r\n");
}

void _regex_verifyL_pass(char *str)
{
	printf("Test_regex_verifyL_pass(%s): ", str);
	
	assert(RMN_verify_string(str) == 1);
	
	printf("PASS\r\n");
}

void _regex_verifyL_fail(char *str)
{
	printf("Test_regex_verifyL_fail(%s): ", str);
	
	assert(RMN_verify_string(str) == 0);
	
	printf("PASS\r\n");
}

void _regex_verifyC_pass(char *str)
{
	printf("Test_regex_verifyC_pass(%s): ", str);
	
	assert(RMN_verify_string(str) == 1);
	
	printf("PASS\r\n");
}

void _regex_verifyC_fail(char *str)
{
	printf("Test_regex_verifyC_fail(%s): ", str);
	
	assert(RMN_verify_string(str) == 0);
	
	printf("PASS\r\n");
}

void _regex_verifyD_pass(char *str)
{
	printf("Test_regex_verifyD_pass(%s): ", str);
	
	assert(RMN_verify_string(str) == 1);
	
	printf("PASS\r\n");
}

void _regex_verifyD_fail(char *str)
{
	printf("Test_regex_verifyD_fail(%s): ", str);
	
	assert(RMN_verify_string(str) == 0);
	
	printf("PASS\r\n");
}

void _regex_verifyM_pass(char *str)
{
	printf("Test_regex_verifyM_pass(%s): ", str);
	
	assert(RMN_verify_string(str) == 1);
	
	printf("PASS\r\n");
}


/*void _regex_verifyMulti_VI_pass(char *str)
{
	printf("Test_regex_verifyMulti_VI_pass(%s): ", str);
	
	assert(RMN_verify_string(str) == 1);
	
	printf("PASS\r\n");
}

void _regex_verifyMulti_VI_fail(char *str)
{
	printf("Test_regex_verifyMulti_VI_fail(%s): ", str);
	
	assert(RMN_verify_string(str) == 0);
	
	printf("PASS\r\n");
}*/

void TEST_rmn_calc_test(void)
{
	_regex_verifyI_pass("I");
	_regex_verifyI_pass("i");
	_regex_verifyI_pass("ii");
	_regex_verifyI_pass("iii");
	_regex_verifyI_fail("iiii");
	
	_regex_verifyV_pass("V");
	_regex_verifyV_pass("v");
	_regex_verifyV_fail("vv");
	
	_regex_verifyX_pass("X");
	_regex_verifyX_pass("x");
	_regex_verifyX_pass("xx");
	_regex_verifyX_pass("xxx");
	_regex_verifyX_fail("xxxx");
	
	_regex_verifyL_pass("L");
	_regex_verifyL_pass("l");
	_regex_verifyL_fail("ll");

	_regex_verifyC_pass("C");
	_regex_verifyC_pass("c");
	_regex_verifyC_pass("cc");
	_regex_verifyC_pass("ccc");
	_regex_verifyC_fail("cccc");
	
	_regex_verifyD_pass("D");
	_regex_verifyD_pass("d");
	_regex_verifyD_fail("dd");
	
	_regex_verifyM_pass("M");
	_regex_verifyM_pass("m");
	_regex_verifyM_pass("mmmmmm");
	
// HSS_Debug: will tackle combinations once singles are done	
//	_regex_verifyMulti_VI_pass("vi");
//	_regex_verifyMulti_VI_pass("vii");
//	_regex_verifyMulti_VI_pass("viii");
//	_regex_verifyMulti_VI_fail("viiii");
//	_regex_verifyMulti_VI_fail("vviii");
//	_regex_verifyMulti_VI_fail("vviv");
		
}