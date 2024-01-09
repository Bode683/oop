#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"

class Player : public Character
{

private:
    int health;
    bool poisoned;

public:
    Player(std::string name);

    // Getters
    int getHealth();
    bool isPoisoned();

    // Setters
    void setHealth(int health);
    void setPoisoned(bool poisoned);

    // Methods
    void damage(int amount);
    void curePoison();

    // Override base class methods
    void move() override;
    void update() override;
    void sense() override;
};

#endif

// Key points:

// Inherits from base Character class
// Additional attributes specific to Player
// Constructor to set all attributes
// Getter & setter methods for attributes
// Methods like damage, cure poison etc.
// Override Character's virtual methods
