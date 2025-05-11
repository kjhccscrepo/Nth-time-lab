

#include "functions.hpp"


int main()
{


	assert(number_suffix(0) == "");
	assert(number_suffix(1) == "st");
	assert(number_suffix(2) == "nd");
	assert(number_suffix(4) == "th");
	assert(number_suffix(120) == "th");
	assert(number_suffix(121) == "st");
	assert(number_suffix(122) == "nd");
	assert(number_suffix(123) == "rd");
	assert(number_suffix(124) == "th");
	assert(number_suffix(11) == "th");
	assert(number_suffix(12011) == "th");
	assert(number_suffix(12021) == "st");
	assert(number_suffix(0, true) == "0");
	assert(number_suffix(1, true) == "1st");
	assert(number_suffix(2, true) == "2nd");
	assert(number_suffix(4, true) == "4th");
	assert(number_suffix(120, true) == "120th");

}
