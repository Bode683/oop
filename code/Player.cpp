
#include "Player.h"

Player::Player(string name) : Character(name) {
  health = 100;
  poisoned = false;
}

int Player::getHealth() {
  return health;  
}

bool Player::isPoisoned() {
  return poisoned;
} 

void Player::setHealth(int h) {
  health = h;
}

void Player::setPoisoned(bool p) {
  poisoned = p;  
}

void Player::damage(int amt) {
  health -= amt;
}

void Player::curePoison() {
  poisoned = false;  
}

// Override base methods

void Player::move() {
  
  // Call base first
  Character::move(); 
  
  // Then visit room
  getCurrentRoom()->enter(this);
  
}  

void Player::update() {

  // Check poison  
  if (poisoned) {
    damage(POISON_DAMAGE);
    
    // Chance to cure 
    if (rand() % 100 < CURE_CHANCE) {
      curePoison();
    }
  }  
}

void Player::sense() {
  // Sense environment   
}

