#ifndef STRATEGY_H
#define STRATEGY_H

#include <iostream>
using namespace std; // Tambahkan ini agar tidak perlu menulis std:: di setiap cout

class Strategy {
public:
    virtual void move() = 0;
    virtual ~Strategy() {}
};

class ChasePacman : public Strategy {
public:
    void move() override {
        cout << "Chasing Pacman!" << endl;
    }
};

class RandomMove : public Strategy {
public:
    void move() override {
        cout << "Moving Randomly!" << endl;
    }
};

#endif
