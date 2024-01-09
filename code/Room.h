#ifndef ROOM_H
#define ROOM_H

#include <string>

class Room
{

private:
    int xPos;
    int yPos;
    std::string description;

public:
    Room(int x, int y, std::string desc);

    int getX();
    int getY();
    std::string getDescription();

    void setDescription(std::string desc);

    // Room functionality
    void enter(Character *character);
};

#endif

// Key Points:
// - Base Room class
// - TrapRoom subclass inherits Room
// - Room constructor sets pos & desc
// - enter() method triggers room effect on Character
