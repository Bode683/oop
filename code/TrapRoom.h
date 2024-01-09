#ifndef TRAPROOM_H
#define TRAPROOM_H

#include "Room.h" // Includes base Room class

class TrapRoom : public Room
{

private:
    int damage; // Amount of damage caused by this trap room

public:
    // Constructor
    TrapRoom(int x, int y, int damage) : Room(x, y, "Trap")
    {
        this->damage = damage;
    }

    // Override base class method
    void enter(Character *character) override;

    // Other getters/setters

    int getDamage();
    void setDamage(int damage);
};

#endif

// Explanation:

// Inherits from base Room class
// Constructor initializes all attributes
// Overrides enter() method to inflict damage
// Provides encapsulated access to damage amount

// By inheriting from Room, code reuse and
// polymorphism can be leveraged
