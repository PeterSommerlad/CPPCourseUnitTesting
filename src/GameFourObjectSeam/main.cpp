#include "GameFourWins.h"
#include <gtest/gtest.h>
#include <cstdlib>
namespace {
    struct LosingDie1 : IDie{
        int roll() override { return 1;}
    };
TEST(GameTest, gameLosesWith1) {
    std::ostringstream out{};
    LosingDie1 theDie{};
    GameFourWins game{theDie};
    game.play(out);
    ASSERT_EQ("You lost!\n", out.str());
}
    struct LosingDie2 : IDie{
        int roll() override { return 2;}
    };
TEST(GameTest, gameLosesWith2) {
    std::ostringstream out{};
    LosingDie2 theDie{};
    GameFourWins game{theDie};
    game.play(out);
    ASSERT_EQ("You lost!\n", out.str());
}
    struct LosingDie3 : IDie{
        int roll() override { return 3;}
    };
TEST(GameTest, gameLosesWith3) {
    std::ostringstream out{};
    LosingDie3 theDie{};
    GameFourWins game{theDie};
    game.play(out);
    ASSERT_EQ("You lost!\n", out.str());
}

    struct WinningDie : IDie{
        int roll() override { return 4;}
    };

TEST(GameTest, gameWins) {
    std::ostringstream out{};
    WinningDie theDie{};
    GameFourWins game{theDie};
    game.play(out);
    ASSERT_EQ("You won!\n", out.str());
}
    struct LosingDie5 : IDie{
        int roll() override { return 5;}
    };
TEST(GameTest, gameLosesWith5) {
    std::ostringstream out{};
    LosingDie5 theDie{};
    GameFourWins game{theDie};
    game.play(out);
    ASSERT_EQ("You lost!\n", out.str());
}
    struct LosingDie6 : IDie{
        int roll() override { return 6;}
    };
TEST(GameTest, gameLosesWith6) {
    std::ostringstream out{};
    LosingDie6 theDie{};
    GameFourWins game{theDie};
    game.play(out);
    ASSERT_EQ("You lost!\n", out.str());
}

}
