#ifndef MONSTER_H
#define MONSTER_H

#include "Character.h"

class Monster : public Character
{

private:
    int attackDamage;

public:
    Monster(std::string name, int damage);

    int getAttackDamage();
    void setAttackDamage(int damage);

    // Override base class methods
    void move() override;
    void update() override;
    void sense() override;

    // Monster-specific methods
    void attack(Character *opponent);
};

#endif

// Details:

// Inherits from the base Character
// Additional attackDamage attribute
// Constructor sets all params
// Getters & setters for attributes

// Overrides Character's methods
// Defines own method to attack opponents

// Keeps things simple for now
// Can add more later if needed
