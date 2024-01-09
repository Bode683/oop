#ifndef POISONROOM_H
#define POISONROOM_H

#include "Room.h"

class PoisonRoom : public Room
{

private:
    int poisonDamage;
    double cureProbability;

public:
    PoisonRoom(int x, int y, int damage, double cureProb);

    int getPoisonDamage();

    void setPoisonDamage(int damage);
    void setCureProbability(double prob);

    void enter(Character *character);
};

#endif

// Explanation:

// Inherits from base Room
// Additional attributes:
// poisonDamage - damage inflicted each turn
// cureProbability - chance to cure per turn

// Constructor sets all params
// Getters & setters provide encapsulation

// Overrides base enter() method
// Custom logic on room entry
