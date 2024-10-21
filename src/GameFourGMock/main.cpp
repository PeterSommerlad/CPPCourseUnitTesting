#include "GameFourWins.h"
#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <cstdlib>
namespace {

struct MockDie: IDie {
    MOCK_METHOD(int,roll,(),(override));
};
using testing::Return;
TEST(GameTest, gameLosesWith1) {
    std::ostringstream out{};
    MockDie theDie;
    EXPECT_CALL(theDie,roll()).WillOnce(Return(1));
    GameFourWins game{theDie};
    game.play(out);
    ASSERT_EQ("You lost!\n", out.str());
}
TEST(GameTest, gameLosesWith2) {
    std::ostringstream out{};
    MockDie theDie;
    EXPECT_CALL(theDie,roll()).WillOnce(Return(2));
    GameFourWins game{theDie};
    game.play(out);
    ASSERT_EQ("You lost!\n", out.str());
}
TEST(GameTest, gameLosesWith3) {
    std::ostringstream out{};
    MockDie theDie;
    EXPECT_CALL(theDie,roll()).WillOnce(Return(3));
    GameFourWins game{theDie};
    game.play(out);
    ASSERT_EQ("You lost!\n", out.str());
}
TEST(GameTest, gameWins) {
    std::ostringstream out{};
    MockDie theDie;
    EXPECT_CALL(theDie,roll()).WillOnce(Return(4));
    GameFourWins game{theDie};
    game.play(out);
    ASSERT_EQ("You won!\n", out.str());
}
TEST(GameTest, gameLosesWith5) {
    std::ostringstream out{};
    MockDie theDie;
    EXPECT_CALL(theDie,roll()).WillOnce(Return(5));
    GameFourWins game{theDie};
    game.play(out);
    ASSERT_EQ("You lost!\n", out.str());
}
TEST(GameTest, gameLosesWith6) {
    std::ostringstream out{};
    MockDie theDie;
    EXPECT_CALL(theDie,roll()).WillOnce(Return(6));
    GameFourWins game{theDie};
    game.play(out);
    ASSERT_EQ("You lost!\n", out.str());
}

}
