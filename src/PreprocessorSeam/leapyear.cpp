#include "leapyear.h"
#include <ctime>
static unsigned getYear() {
	time_t now = time(0);// replace?
	tm* z = localtime(&now);
	return z->tm_year + 1900;
}
bool isLeapYear() {
	auto year = getYear();
	if ((year % 400) == 0) {
    //...
		return true;
	}
	if ((year % 100) == 0) {
		return false;
	}
	if ((year % 4) == 0) {
		return true;
	}
	return false;
}
