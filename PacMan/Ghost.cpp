#include "Ghost.h"
#include <iostream>

Ghost::Ghost(Strategy* s) : strategy(s) {
    std::cout << "Ghost Constructor Called" << std::endl;
}

void Ghost::setStrategy(Strategy* s) {
    std::cout << "Setting new strategy" << std::endl;
    strategy = s;
}

void Ghost::move() {
    std::cout << "Ghost Move Called" << std::endl;
    if (strategy) {
        strategy->move();
    } else {
        std::cout << "No strategy set" << std::endl;
    }
}
