#ifndef MAP_H
#define MAP_H
#include <iostream>
#include <vector>

class Map {
public:
    std::vector<std::vector<char>> grid;
    Map();
    void render();
};

#endif
