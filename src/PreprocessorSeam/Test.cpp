#include "cute.h"
#include "ide_listener.h"
#include "cute_runner.h"
#include "leapyear.h"

void test2001IsNotALeapYear() {
	ASSERT(not isLeapYear());
}

void runSuite(){
	cute::suite s;
	s.push_back(CUTE(test2001IsNotALeapYear));
	cute::ide_listener lis;
	cute::makeRunner(lis)(s, "The Suite");
}

int main(){
    runSuite();
    return 0;
}
