#include "Die.h"
#include <ostream> // need full definition

template<typename DIE=Die>
struct GameFourWins {
	void play(std::ostream& os) {
		if (die.roll() == 4) {
			os << "You won!" << std::endl;
		} else {
			os << "You lost!" << std::endl;
		}
    }
private:
	DIE die;
};
