#include "Die.h"
#include <cstdlib>

int Die::roll()  {
    // this is not a recommended way for random numbers
	return rand() % 6 + 1;
}
