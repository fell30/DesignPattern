#ifndef PACMAN_H
#define PACMAN_H
#include "Ghost.h"
#include "Strategy.h"
#include "Map.h"
#include <iostream>
#include <conio.h> // For keyboard input in Windows

class Pacman {
private:
    int x, y;
    Map* map;

public:
    Pacman(Map* m);
    void eatPowerPellet(Ghost &ghost, Strategy* fastStrategy);
    void move();
};

#endif