#ifndef GHOST_H
#define GHOST_H
#include "Strategy.h"

class Ghost {
private:
    Strategy* strategy;

public:
    Ghost(Strategy* s);
    void setStrategy(Strategy* s);
    void move();
};

#endif