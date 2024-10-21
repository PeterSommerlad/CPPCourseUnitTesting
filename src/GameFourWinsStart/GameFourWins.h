#include "Die.h"
#include <iosfwd>

struct GameFourWins {
	void play(std::ostream& os) ;
private:
	Die die{};
};
