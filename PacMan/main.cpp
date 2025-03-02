#include "Map.h"
#include "Factory.h"
#include "Pacman.h"
#include <thread>
#include <chrono>
#include <iostream>

#ifdef _WIN32
#include <windows.h>
#define CLEAR "cls"
#else
#include <unistd.h>
#define CLEAR "clear"
#endif

int main() {
    Map map;
    Pacman pacman(&map);

    std::cout << "Initial Map:" << std::endl;
    map.render();

    Ghost* ghost = GhostFactory::createGhost("Chase");
    ghost->move();

    while (true) {
        pacman.move();
        system(CLEAR);
        map.render();
        #ifdef _WIN32
        Sleep(200);
        #else
        usleep(200 * 1000);
        #endif
    }

    delete ghost;

    return 0;
}
