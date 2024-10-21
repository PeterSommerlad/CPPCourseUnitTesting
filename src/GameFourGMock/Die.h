#ifndef DIE_H_
#define DIE_H_
#include "IDie.h"
struct Die : IDie {
	 int roll() override;
};

#endif /* DIE_H_ */
