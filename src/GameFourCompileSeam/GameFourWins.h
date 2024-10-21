#ifdef GAME_FOUR_WINS_H_
#define GAME_FOUR_WINS_H_
#include "Die.h"
#include <ostream> // need full definition
template<typename DIE=Die>
struct GameFourWins {
  void play(std::ostream& os) {
    if (die.roll() == 4) {
      os << "You won!\n";
    } else {
      os << "You lost!\n";
    }
  }
private:
  DIE die;
};
#endif