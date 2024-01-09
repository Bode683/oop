
#include "Room.h"

Room::Room(int x, int y, string desc) {
  this->xPos = x;
  this->yPos = y;
  this->description = desc;
}

int Room::getX() {
  return xPos;  
}

int Room::getY() {
  return yPos;
}

string Room::getDescription() {
  return description;
}

void Room::setDescription(string desc) {
  description = desc;
}

void Room::enter(Character* character) {
  
  // Default room logic
  cout << character->getName() << " enters " << description << " room." << endl;
  
  // Chance to find items
  
  if(rand()%100 < 10) {
    cout << "You found an item!" << endl; 
  }

}
