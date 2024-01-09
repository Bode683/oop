#include "Character.h"

Character::Character() {
  name = "";
  currentRoom = 0;
  movesRemaining = 1; 
}

Character::Character(std::string name) {
  this->name = name;
  currentRoom = 0;
  movesRemaining = 1;
}

std::string Character::getName() {
  return name; 
}

int Character::getCurrentRoom() {
  return currentRoom;  
}

int Character::getMovesRemaining() {
  return movesRemaining;
}

void Character::setCurrentRoom(int room) {
  currentRoom = room;
}

// Choose random direction 
vector<int> Character::chooseNextMove() {
   int x = rand() % 3 - 1; 
   int y = rand() % 3 - 1;
   return {x, y};  
}

void Character::move() {
  // Default movement logic  
  vector<int> dir = chooseNextMove();
  // Update position  
}

void Character::update() {
  // Optional hook for subclasses 
}

// Simple default implementations  
// Subclasses override with specific logic
