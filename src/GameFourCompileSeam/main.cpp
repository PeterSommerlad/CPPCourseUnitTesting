#include "GameFourWins.h"
#include <gtest/gtest.h>
#include <cstdlib>
namespace {
    struct LosingDie1{
        int roll() { return 1;}
    };
TEST(GameTest, gameLosesWith1) {
    std::ostringstream out{};
    GameFourWins<LosingDie1> game{};
    game.play(out);
    ASSERT_EQ("You lost!\n", out.str());
}
    struct LosingDie2 {
        int roll()  { return 2;}
    };
TEST(GameTest, gameLosesWith2) {
    std::ostringstream out{};
    GameFourWins<LosingDie2> game{};
    game.play(out);
    ASSERT_EQ("You lost!\n", out.str());
}
    struct LosingDie3 {
        int roll()  { return 3;}
    };
TEST(GameTest, gameLosesWith3) {
    std::ostringstream out{};
    GameFourWins<LosingDie3> game{};
    game.play(out);
    ASSERT_EQ("You lost!\n", out.str());
}

    struct WinningDie {
        int roll() { return 4;}
    };

TEST(GameTest, gameWins) {
    std::ostringstream out{};
    GameFourWins<WinningDie> game{};
    game.play(out);
    ASSERT_EQ("You won!\n", out.str());
}
    struct LosingDie5 {
        int roll()  { return 5;}
    };
TEST(GameTest, gameLosesWith5) {
    std::ostringstream out{};
    GameFourWins<LosingDie5> game{};
    game.play(out);
    ASSERT_EQ("You lost!\n", out.str());
}
    struct LosingDie6 {
        int roll() { return 6;}
    };
TEST(GameTest, gameLosesWith6) {
    std::ostringstream out{};
    GameFourWins<LosingDie6> game{};
    game.play(out);
    ASSERT_EQ("You lost!\n", out.str());
}

}
