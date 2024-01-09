
#include "Monster.h"

Monster::Monster(string name, int damage) : Character(name) {
  attackDamage = damage;
}

int Monster::getAttackDamage() {
  return attackDamage; 
}

void Monster::setAttackDamage(int d) {
  attackDamage = d;
}

// Override base methods

void Monster::move() {

  // Monster movement logic
  vector<int> next = seekPlayer();
  
  Character::move(); // base movement

  // Check if player in room
  attack(player);
  
}

void Monster::update() {

  // Any periodic monster logic
  
}

void Monster::sense() {

  // Sense player location
  vector<int> playerPos = game.getPlayerPos();
  
  // Other sensing  
}

// Monster-specific

vector<int> Monster::seekPlayer() {
  // Next dir to move towards player 
  return {1, 0}; 
}

void Monster::attack(Character* player) {

  // Inflict damage if in same room 
}
