#include "mockit_time.h"
#undef time
time_t mockit_time(time_t* _timer_, 
  const char* file, int line) {
  //time(_timer_); // production implementation
  return 986725194; // day in 2001
}
