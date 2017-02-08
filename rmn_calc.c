// --------------- rmn_calc.c Log --------------------
//
// 02/06/2017	HSamra	Initial Commit
// 02/06/2017	HSamra	Adding functionality for string verification
//
// ---------------------------------------------------

#include <regex.h>
#include <string.h>
#include <ctype.h>
#include "common.h"

char rgx_str[] = {"^((m*)((cm?)|((cd?)|(d?)(c{0,3})))((xc?)|((xl?)|(l?)(x{0,3})))((ix?)|((iv?)|(v?)(i{0,3}))))$"};

regex_t regex;
byte rgxSts = 0;

int RMN_init(void)
{
	// compile regex
	if(regcomp(&regex, rgx_str, REG_EXTENDED | REG_ICASE) != 0) // using extended regular expressions and ignoring case
	{
		printf("Could not compile regex\r\n");
		return 0;
	}
	return 1;
}

int RMN_verify_string(char *str)
{
	byte rgxSts = 0;
	
	rgxSts = regexec(&regex, str, 0, NULL, 0);
	
	if(!rgxSts)
	{
		// if match
		return 1;
	}
	else if(rgxSts == REG_NOMATCH)
	{
		// if no match
		return 0;
	}
	else
	{
		// other errors
		char rgxErr[16];
		memset(rgxErr, 0x00, sizeof(rgxErr));
		regerror(rgxSts, &regex, rgxErr, sizeof(rgxErr));
		printf("Regex error: %s\r\n", rgxErr);
	}
	return 0;	
}
