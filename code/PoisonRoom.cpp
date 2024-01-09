
#include "PoisonRoom.h"

PoisonRoom::PoisonRoom(int x, int y, int damage, double cureProb) : Room(x, y, "Poison") {
  poisonDamage = damage;
  cureProbability = cureProb; 
}

int PoisonRoom::getPoisonDamage() {
  return poisonDamage;
}

void PoisonRoom::setPoisonDamage(int d) {
  poisonDamage = d;
}

void PoisonRoom::setCureProbability(double prob) {
  cureProbability = prob;
}

void PoisonRoom::enter(Character* character) {

  // Print message
  cout << character->getName() << " entered poison room!" << endl;

  // Affect player
  Player* player = dynamic_cast<Player*>(character);
  if(player) {
    player->setPoisoned(true); 
  }

}

// Overrides base room 
// Poison effect on Player
// Can later improve with items, graphics etc.
