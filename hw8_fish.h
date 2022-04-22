#ifndef HW8_FISH_H
#define HW8_FISH_H
#include<vector>
using namespace std;
class Fish {
public:
    Fish();
    virtual void Grow();
    virtual void Print();
    virtual Fish* Reproduce();
    virtual void Eat(vector<Fish*> fish_in_cell);
    // (1 point)
    // Write a getter function to return the value of member variable alive.
    bool IsAlive();
    // (1 point) Set alive to false.
    void Die();
    // (1 point)
    // A new member variable edible is added.
    // Write a getter function to return the value of edible.
    bool IsEdible();
    // (1 point)
    // A new member variable edible is added.
    // Write a setter function to set the value of edible to input e.
    void SetEdible(bool e);
    // (1 point)
    // Write a getter function to return the size of the fish.
    float GetSize();
private:
    float reproduce_probability; // Initialized to 0.4
    float growth_rate; // Initialized to 0.2
    float size; // Initialized to 1
    int age; // Initialized to 0
    bool alive; // Initialized to true
    bool edible; // Initialized to true
};


#endif // HW8_FISH_H
