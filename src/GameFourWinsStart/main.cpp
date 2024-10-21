#include "GameFourWins.h"
#include <gtest/gtest.h>
#include <cstdlib>
namespace {
TEST(GameTest, gameLoses) {
    srand(5); // test fails with 6
    std::ostringstream out{};
    GameFourWins game{};
    game.play(out);
    ASSERT_EQ("You lost!\n", out.str());
    // Fragile test case
}
}
