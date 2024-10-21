cmake_minimum_required(VERSION 3.5)

project(shapes)

add_executable(the_executable
    Die.cpp
    GameFourWins.cpp
    main.cpp)

target_link_libraries(the_executable
  gtestd gtest_maind )

