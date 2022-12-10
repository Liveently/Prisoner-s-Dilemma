
#include "PlayerStrategy.h"

#include <map>
#include <string>
#include <iostream>
#include "Factory.h"


constexpr char kPlayID[] = "play";



namespace {
    Strategy *create() {
        return new PlayerStrategy();
    }
}

bool PlayB = Factory<Strategy, std::string>::
getInstance()->registerCreator(kPlayID, create);



TChoice PlayerStrategy::getChoice() {
    std::string decision;
    while (decision != "c" && decision != "d" && decision != "C" && decision != "D") {
        std::cout << "What is your decision? (C/D): ";
        std::cin >> decision;
    }
    if (decision == "c" || decision == "C") {
        return TChoice::COOP;
    } else {
        return TChoice::DEF;
    }
}