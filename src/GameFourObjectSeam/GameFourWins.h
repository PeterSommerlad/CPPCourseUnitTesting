#include "IDie.h"
#include <iosfwd>

struct GameFourWins {
	void play(std::ostream& os) ;
    GameFourWins(IDie &theDie):die{theDie}{}
private:
	IDie &die;
};
