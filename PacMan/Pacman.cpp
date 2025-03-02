#include "Pacman.h"

Pacman::Pacman(Map* m) : map(m) {
    x = 1;
    y = 2;
}

void Pacman::eatPowerPellet(Ghost &ghost, Strategy* fastStrategy) {
    std::cout << "Pacman eats Power Pellet!" << std::endl;
    ghost.setStrategy(fastStrategy);
}

void Pacman::move() {
    if (_kbhit()) {
        char ch = _getch();
        int newX = x, newY = y;
        switch (ch) {
        case 'w':
            newX--;
            break;
        case 's':
            newX++;
            break;
        case 'a':
            newY--;
            break;
        case 'd':
            newY++;
            break;
        }
        if (map->grid[newX][newY] == ' ') {
            map->grid[x][y] = ' ';
            x = newX;
            y = newY;
            map->grid[x][y] = 'P';
        }
    }
}