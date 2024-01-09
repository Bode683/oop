#ifndef MAP_H
#define MAP_H

#include "Room.h"
#include "TrapRoom.h"
#include "PoisonRoom.h"

class Map
{

private:
    // 2D vector of Room pointers
    std::vector<std::vector<Room *>> grid;

    int width;
    int height;

    // Start and end positions
    Point startPos;
    Point endPos;

public:
    Map(int width, int height);

    // Add rooms
    void addRoom(Room *room);
    void addTrap(TrapRoom *trap);
    void addPoison(PoisonRoom *poison);

    // Getters
    Room *getRoom(Point pos);
    bool inBounds(Point pos);

    // Set start & end
    void setStart(Point pos);
    void setEnd(Point pos);
};

#endif

// Includes necessary room header files

// Stores grid of rooms, dimensions
// Can add subclasses of rooms

// Get room at a position
// Check valid position

// Rooms stored as parent pointer
// Allows polymorphic handling
