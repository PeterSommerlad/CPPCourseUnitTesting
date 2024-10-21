#ifndef MOCKIT_TIME_H_
#define MOCKIT_TIME_H_
#include <ctime>
time_t mockit_time(time_t*, const char*, int);
#define time(_timer_) \
  mockit_time((_timer_), __FILE__, __LINE__)
#endif
