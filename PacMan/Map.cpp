#include "Map.h"

Map::Map() {
    std::cout << "Map Constructor Called" << std::endl;
    grid = {{'#', '#', '#', '#', '#'},
            {'#', ' ', 'P', ' ', '#'},
            {'#', ' ', 'G', ' ', '#'},
            {'#', '#', '#', '#', '#'}};
}

void Map::render() {
    std::cout << "Rendering Map" << std::endl;
    for (auto &row : grid) {
        for (auto &cell : row) {
            std::cout << cell << ' ';
        }
        std::cout << std::endl;
    }
}