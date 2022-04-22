#ifndef HW8_SHARK_H
#define HW8_SHARK_H

#include <vector>
#include "hw8_fish.h"
using namespace std;
class Shark : public Fish {
public:
    Shark();
    void Grow();
    void Print();
    Fish* Reproduce();
    void Eat(std::vector<Fish*> fish_in_cell);
private:
    static const float max_hunger;
    static float hunger_increment;
    float hunger;
};

#endif // HW8_SHARK_H
