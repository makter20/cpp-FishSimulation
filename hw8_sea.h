#ifndef HW8_SEA_H
#define HW8_SEA_H

#include <vector>
#include "hw8_shark.h"
#define SIZE 10
#define INIT_NUM_FISH 10
#define INIT_NUM_SHARK 5
class Sea {
public:
    Sea();
    void SimulateOneStep();
    void Print();
    void PopulationCensus(int& nshark, int& nfish);
    int getCell(int x, int y);
private:
    std::vector<Fish*> cells[SIZE][SIZE];
    std::vector<Fish*> temp_cells[SIZE][SIZE];
};

#endif // HW8_SEA_H
