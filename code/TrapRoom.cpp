
#include "TrapRoom.h"

void TrapRoom::enter(Character* character) {

  // Print message
  cout << character->getName() << " triggered trap!" << endl;

  // Affect player
  Player* player = dynamic_cast<Player*>(character);
  if(player) {
    player->damage(damage);
    player->setMovesRemaining(0);
  }

}  

int TrapRoom::getDamage() {
  return damage;
}

void TrapRoom::setDamage(int d) {
  damage = d; 
}

// Overrides base room class
// Applies trap effects on Player
// Factor out messages/graphics later
