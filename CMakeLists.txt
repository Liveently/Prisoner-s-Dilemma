cmake_minimum_required(VERSION 3.23)
project(Prisoner_s_Dilemma)

set(CMAKE_CXX_STANDARD 14)

add_executable(Prisoner_s_Dilemma main.cpp Runner.cpp Runner.h Factory.h  Strategy.h Strategy.cpp StrategyTypesAndConstants.h RunnerTypesAndConstants.h RunnerIO.cpp RunnerIO.h AlwaysCoopStrategy.cpp AlwaysCoopStrategy.h AlwaysDefStrategy.cpp AlwaysDefStrategy.h RandomStrategy.cpp RandomStrategy.h MostFreqStrategy.cpp MostFreqStrategy.h MetaStrategy.cpp MetaStrategy.h PlayerStrategy.cpp PlayerStrategy.h Strategy.cpp)

add_subdirectory(Google_tests)