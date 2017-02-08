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

void _regex_verifyMulti_XI_pass(char *str)
{
	printf("Test_regex_verifyMulti_XI_pass(%s): ", str);
	
	assert(RMN_verify_string(str) == 1);
	
	printf("PASS\r\n");
}

void _regex_verifyMulti_XI_fail(char *str)
{
	printf("Test_regex_verifyMulti_XI_fail(%s): ", str);
	
	assert(RMN_verify_string(str) == 0);
	
	printf("PASS\r\n");
}

void _regex_verifyMulti_XV_pass(char *str)
{
	printf("Test_regex_verifyMulti_XV_pass(%s): ", str);
	
	assert(RMN_verify_string(str) == 1);
	
	printf("PASS\r\n");
}

void _regex_verifyMulti_XV_fail(char *str)
{
	printf("Test_regex_verifyMulti_XV_fail(%s): ", str);
	
	assert(RMN_verify_string(str) == 0);
	
	printf("PASS\r\n");
}

void _regex_verifyMulti_all_pass(char *str)
{
	printf("Test_regex_verifyMulti_all_pass(%s): ", str);
	
	assert(RMN_verify_string(str) == 1);
	
	printf("PASS\r\n");
}

void _regex_verifyMulti_all_fail(char *str)
{
	printf("Test_regex_verifyMulti_all_fail(%s): ", str);
	
	assert(RMN_verify_string(str) == 0);
	
	printf("PASS\r\n");
}

void _regex_verifySubTrm_IV_pass(char *str)
{
	printf("Test_regex_verifySubTerm_IV_pass(%s): ", str);
	
	assert(RMN_verify_string(str) == 1);
	
	printf("PASS\r\n");
}

void _regex_verifySubTrm_IV_fail(char *str)
{
	printf("Test_regex_verifySubTrm_IV_fail(%s): ", str);
	
	assert(RMN_verify_string(str) == 0);
	
	printf("PASS\r\n");
}

void _regex_verifySubTrm_IX_pass(char *str)
{
	printf("Test_regex_verifySubTrm_IX_pass(%s): ", str);
	
	assert(RMN_verify_string(str) == 1);
	
	printf("PASS\r\n");
}

void _regex_verifySubTrm_IX_fail(char *str)
{
	printf("Test_regex_verifySubTrm_IX_fail(%s): ", str);
	
	assert(RMN_verify_string(str) == 0);
	
	printf("PASS\r\n");
}

void _regex_verifySubTrm_XL_pass(char *str)
{
	printf("Test_regex_verifySubTrm_XL_pass(%s): ", str);
	
	assert(RMN_verify_string(str) == 1);
	
	printf("PASS\r\n");
}

void _regex_verifySubTrm_XL_fail(char *str)
{
	printf("Test_regex_verifySubTrm_XL_fail(%s): ", str);
	
	assert(RMN_verify_string(str) == 0);
	
	printf("PASS\r\n");
}

void _regex_verifySubTrm_XC_pass(char *str)
{
	printf("Test_regex_verifySubTrm_XC_pass(%s): ", str);
	
	assert(RMN_verify_string(str) == 1);
	
	printf("PASS\r\n");
}

void _regex_verifySubTrm_XC_fail(char *str)
{
	printf("Test_regex_verifySubTrm_XC_fail(%s): ", str);
	
	assert(RMN_verify_string(str) == 0);
	
	printf("PASS\r\n");
}

void _regex_verifySubTrm_CD_pass(char *str)
{
	printf("Test_regex_verifySubTrm_CD_pass(%s): ", str);
	
	assert(RMN_verify_string(str) == 1);
	
	printf("PASS\r\n");
}

void _regex_verifySubTrm_CD_fail(char *str)
{
	printf("Test_regex_verifySubTrm_CD_fail(%s): ", str);
	
	assert(RMN_verify_string(str) == 0);
	
	printf("PASS\r\n");
}


void _regex_verifySubTrm_CM_pass(char *str)
{
	printf("Test_regex_verifySubTrm_CM_pass(%s): ", str);
	
	assert(RMN_verify_string(str) == 1);
	
	printf("PASS\r\n");
}

void _regex_verifySubTrm_CM_fail(char *str)
{
	printf("Test_regex_verifySubTrm_CM_fail(%s): ", str);
	
	assert(RMN_verify_string(str) == 0);
	
	printf("PASS\r\n");
}

void TEST_rmn_calc_test(void)
{
	// test conditions for each character
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
	
	// testing edge conditions
	_regex_verifyMulti_VI_pass("vi");
	_regex_verifyMulti_VI_fail("viiii");
	_regex_verifyMulti_VI_fail("vvi");
	
	_regex_verifyMulti_XI_pass("xi");
	_regex_verifyMulti_XI_pass("xxxiii");
	_regex_verifyMulti_XI_fail("xiiii");
	_regex_verifyMulti_XI_fail("xxxxi");
	
	_regex_verifyMulti_XV_pass("xv");
	_regex_verifyMulti_XV_pass("xxxv");
	_regex_verifyMulti_XV_fail("xvv");
	_regex_verifyMulti_XV_fail("xxxxv");
	
	_regex_verifyMulti_all_pass("mdclxvi");
	_regex_verifyMulti_all_fail("mcdivxl");
	
	// test conditions for subtractive terms (iv, ix, xl, xc, cd, cm)
	_regex_verifySubTrm_IV_pass("iv");
	_regex_verifySubTrm_IV_fail("ivi");
	_regex_verifySubTrm_IV_fail("ivv");
	_regex_verifySubTrm_IV_fail("viv");
	
	_regex_verifySubTrm_IX_pass("ix");
	_regex_verifySubTrm_IX_pass("xix");
	_regex_verifySubTrm_IX_fail("ixi");
	_regex_verifySubTrm_IX_fail("ixiv");
	_regex_verifySubTrm_IX_fail("ixv");
	
	_regex_verifySubTrm_XL_pass("xl");
	_regex_verifySubTrm_XL_pass("xli");
	_regex_verifySubTrm_XL_pass("xlix");
	_regex_verifySubTrm_XL_pass("cxl");
	_regex_verifySubTrm_XL_fail("xlx");
	_regex_verifySubTrm_XL_fail("xll");
	
	_regex_verifySubTrm_XC_pass("xc");
	_regex_verifySubTrm_XC_pass("cxc");
	_regex_verifySubTrm_XC_pass("xcix");
	_regex_verifySubTrm_XC_pass("xcvi");
	_regex_verifySubTrm_XC_pass("xciv");
	_regex_verifySubTrm_XC_fail("xcx");
	_regex_verifySubTrm_XC_fail("xcxl");
	_regex_verifySubTrm_XC_fail("xcl");
	
	_regex_verifySubTrm_CD_pass("cd");
	_regex_verifySubTrm_CD_pass("cdxl");
	_regex_verifySubTrm_CD_pass("cdxc");
	_regex_verifySubTrm_CD_pass("cdi");
	_regex_verifySubTrm_CD_pass("cdv");
	_regex_verifySubTrm_CD_pass("cdx");
	_regex_verifySubTrm_CD_fail("cdc");
	_regex_verifySubTrm_CD_fail("dcd");
	
	_regex_verifySubTrm_CM_pass("cm");
	_regex_verifySubTrm_CM_pass("cmi");
	_regex_verifySubTrm_CM_pass("cmxc");
	_regex_verifySubTrm_CM_pass("cmxl");
	_regex_verifySubTrm_CM_pass("mcm");
	_regex_verifySubTrm_CM_pass("cmlxvi");
	_regex_verifySubTrm_CM_fail("cmc");
	_regex_verifySubTrm_CM_fail("cmd");
	_regex_verifySubTrm_CM_fail("cmcd");
	
}
