#include "Die.h"
#include <cstdlib>

int Die::roll()  {
  return rand() % 6 + 1;
}
