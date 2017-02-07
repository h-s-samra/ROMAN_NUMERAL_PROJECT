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

void _regex_verifyMulti_VI_pass(char *str)
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
}

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
	
	_regex_verifyMulti_VI_pass("vi");
	_regex_verifyMulti_VI_pass("vii");
	_regex_verifyMulti_VI_pass("viii");
	_regex_verifyMulti_VI_fail("viiii");
	_regex_verifyMulti_VI_fail("vviii");
	_regex_verifyMulti_VI_fail("vviv");
		
}