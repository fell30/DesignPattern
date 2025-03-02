#ifndef FACTORY_H
#define FACTORY_H
#include "Ghost.h"
#include "Strategy.h"

class GhostFactory {
public:
    static Ghost* createGhost(const std::string& type) {
        std::cout << "Factory Creating Ghost of type: " << type << std::endl;
        if (type == "Chase") {
            return new Ghost(new ChasePacman());
        } else if (type == "Random") {
            return new Ghost(new RandomMove());
        }
        std::cout << "Invalid Ghost Type" << std::endl;
        return nullptr;
    }
};

#endif