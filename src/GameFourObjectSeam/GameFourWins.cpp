#include "GameFourWins.h"
#include <ostream>
	void GameFourWins::play(std::ostream& os) {
		if (die.roll() == 4) {
			os << "You won!" << std::endl;
		} else {
			os << "You lost!" << std::endl;
		}
	}