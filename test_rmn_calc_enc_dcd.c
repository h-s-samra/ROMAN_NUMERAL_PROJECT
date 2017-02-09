// --------------- test_rmn_calc_enc_dcd.c Log --------------------
//
// 02/08/2017	HSamra	Initial Commit
// 02/08/2017	HSamra	Adding tests for integer encoding to roman numeral
//							- added test for 'I'
//							- added test for 'IV'
//							- added test for 'V'
//							- added test for 'IX'
//							- added test for 'X'
//							- added test for 'XL'
//							- added test for 'L'
//							- added test for 'XC'
//							- added test for 'C'
//							- added test for 'CD'
//							- added test for 'D'
//							- added test for 'CM'
//							- added test for 'M'
//
// --------------------------------------------------------

#include <assert.h>
#include "common.h"

char bfr[8];

void _encode_to_I(int n, char *str)
{
	RMN_bfr_init(bfr);
	
	printf("Test_encode_to_I(%d): ", n);
	
	RMN_encode_int(n, bfr);
	
	assert(strcmp(bfr, str) == 0);
	assert(RMN_verify_string(bfr) == 1);
	
	printf("PASS\r\n");
}

void _encode_to_IV(int n, char *str)
{
	RMN_bfr_init(bfr);
	
	printf("Test_encode_to_IV(%d): ", n);
	
	RMN_encode_int(n, bfr);
	
	assert(strcmp(bfr, str) == 0);
	assert(RMN_verify_string(bfr) == 1);
	
	printf("PASS\r\n");
}

void _encode_to_V(int n, char *str)
{
	RMN_bfr_init(bfr);
	
	printf("Test_encode_to_V(%d): ", n);
	
	RMN_encode_int(n, bfr);
	
	assert(strcmp(bfr, str) == 0);
	assert(RMN_verify_string(bfr) == 1);
	
	printf("PASS\r\n");
}

void _encode_to_IX(int n, char *str)
{
	RMN_bfr_init(bfr);
	
	printf("Test_encode_to_IX(%d): ", n);
	
	RMN_encode_int(n, bfr);
	
	assert(strcmp(bfr, str) == 0);
	assert(RMN_verify_string(bfr) == 1);
	
	printf("PASS\r\n");
}

void _encode_to_X(int n, char *str)
{
	RMN_bfr_init(bfr);
	
	printf("Test_encode_to_X(%d): ", n);
	
	RMN_encode_int(n, bfr);
	
	assert(strcmp(bfr, str) == 0);
	assert(RMN_verify_string(bfr) == 1);
	
	printf("PASS\r\n");
}

void _encode_to_XL(int n, char *str)
{
	RMN_bfr_init(bfr);
	
	printf("Test_encode_to_XL(%d): ", n);
	
	RMN_encode_int(n, bfr);
	
	assert(strcmp(bfr, str) == 0);
	assert(RMN_verify_string(bfr) == 1);
	
	printf("PASS\r\n");
}

void _encode_to_L(int n, char *str)
{
	RMN_bfr_init(bfr);
	
	printf("Test_encode_to_L(%d): ", n);
	
	RMN_encode_int(n, bfr);
	
	assert(strcmp(bfr, str) == 0);
	assert(RMN_verify_string(bfr) == 1);
	
	printf("PASS\r\n");
}

void _encode_to_XC(int n, char *str)
{
	RMN_bfr_init(bfr);
	
	printf("Test_encode_to_XC(%d): ", n);
	
	RMN_encode_int(n, bfr);
	
	assert(strcmp(bfr, str) == 0);
	assert(RMN_verify_string(bfr) == 1);
	
	printf("PASS\r\n");
}

void _encode_to_C(int n, char *str)
{
	RMN_bfr_init(bfr);
	
	printf("Test_encode_to_C(%d): ", n);
	
	RMN_encode_int(n, bfr);
	
	assert(strcmp(bfr, str) == 0);
	assert(RMN_verify_string(bfr) == 1);
	
	printf("PASS\r\n");
}

void _encode_to_CD(int n, char *str)
{
	RMN_bfr_init(bfr);
	
	printf("Test_encode_to_CD(%d): ", n);
	
	RMN_encode_int(n, bfr);
	
	assert(strcmp(bfr, str) == 0);
	assert(RMN_verify_string(bfr) == 1);
	
	printf("PASS\r\n");
}

void _encode_to_D(int n, char *str)
{
	RMN_bfr_init(bfr);
	
	printf("Test_encode_to_D(%d): ", n);
	
	RMN_encode_int(n, bfr);
	
	assert(strcmp(bfr, str) == 0);
	assert(RMN_verify_string(bfr) == 1);
	
	printf("PASS\r\n");
}

void _encode_to_CM(int n, char *str)
{
	RMN_bfr_init(bfr);
	
	printf("Test_encode_to_CM(%d): ", n);
	
	RMN_encode_int(n, bfr);
	
	assert(strcmp(bfr, str) == 0);
	assert(RMN_verify_string(bfr) == 1);
	
	printf("PASS\r\n");
}

void _encode_to_M(int n, char *str)
{
	RMN_bfr_init(bfr);
	
	printf("Test_encode_to_M(%d): ", n);
	
	RMN_encode_int(n, bfr);
	
	assert(strcmp(bfr, str) == 0);
	assert(RMN_verify_string(bfr) == 1);
	
	printf("PASS\r\n");
}

void TEST_rmn_calc_test_enc_dcd(void)
{
	_encode_to_I(1, "I");
	_encode_to_I(3, "III");
	_encode_to_IV(4, "IV");
	_encode_to_V(5, "V");
	_encode_to_V(8, "VIII");
	_encode_to_IX(9, "IX");
	_encode_to_X(10, "X");
	_encode_to_X(39, "XXXIX");
	_encode_to_XL(40, "XL");
	_encode_to_XL(49, "XLIX");
	_encode_to_L(50, "L");
	_encode_to_L(89, "LXXXIX");
	_encode_to_XC(90, "XC");
	_encode_to_XC(99, "XCIX");
	_encode_to_C(100, "C");
	_encode_to_C(399, "CCCXCIX");
	_encode_to_CD(400, "CD");
	_encode_to_CD(499, "CDXCIX");
	_encode_to_D(500, "D");
	_encode_to_D(899, "DCCCXCIX");
	_encode_to_CM(900, "CM");
	_encode_to_CM(999, "CMXCIX");
	_encode_to_M(1000, "M");
	_encode_to_M(1999, "MCMXCIX");
	
}
