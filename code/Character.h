#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

class Character
{
protected:
    std::string name;
    int currentRoom;
    int movesRemaining;

public:
    Character();
    Character(std::string name);

    // Getter methods
    std::string getName();
    int getCurrentRoom();
    int getMovesRemaining();

    // Setter methods
    void setCurrentRoom(int room);

    // Movement & actions
    std::vector<int> chooseNextMove();
    void move();
    void update();

    // Virtual methods to override
    virtual void sense() = 0;
};

#endif

// Key things included:
// - Constructor & Destructor
// - Attributes as private members
// - Getter & setter methods
// - Some basic methods
// - A virtual method to override in subclasses
