// --------------- test_rmn_calc.c Log --------------------
//
// 02/06/2017	HSamra	Initial Commit
// 02/06/2017	HSamra	Adding tests for regex comparisons
//							- added tests for i and I (min: 0, max: 3)
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

void TEST_rmn_calc_test(void)
{
	_regex_verifyI_pass("I");
	_regex_verifyI_pass("i");
	_regex_verifyI_pass("ii");
	_regex_verifyI_pass("iii");
	_regex_verifyI_fail("iiii");
	
}