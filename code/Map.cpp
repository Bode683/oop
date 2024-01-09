#include "Map.h"

Map::Map(int width, int height) {
  this->width = width;
  this->height = height;
  
  // Initialize empty grid
  grid.resize(width, vector<Room*>(height, nullptr));
}

void Map::addRoom(Room* room) {
  grid[room->getX()][room->getY()] = room; 
}

void Map::addTrap(TrapRoom* trap) {
  addRoom(trap); // polymorphism
}

void Map::addPoison(PoisonRoom* poison) {
  addRoom(poison); // polymorphism
}

Room* Map::getRoom(Point pos) {
  return grid[pos.x][pos.y]; 
}

bool Map::inBounds(Point pos) {
  // Check valid row and col values  
  return (pos.x >= 0 && pos.x < width
           && pos.y >= 0 && pos.y < height); 
}

// Set start/end positions
void Map::setStart(Point pos) {
  startPos = pos;
}

void Map::setEnd(Point pos) {
 endPos = pos;  
}

// Simple functionality to start
// Can improve by parsing from file etc.
