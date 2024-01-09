#ifndef GAME_H
#define GAME_H

#include "Map.h"
#include "Player.h"
#include "Monster.h"

class Game
{

private:
    Map map;
    Player *player;
    Monster *monster;

    bool gameOver;
    int turn; // whose turn

public:
    Game();

    // Initialize game
    void initialize(int width, int height);

    Player *getPlayer();
    Monster *getMonster();

    void play();

    // Game status
    bool isGameOver();
    int whoseTurn();

    // Gameplay methods
    void movePlayer(Point pos);
    void moveMonster();

    // Check conditions
    void checkTraps();
    void updatePoisons();
};

#endif

// Contains Map and Characters

// Constructor initializes
// Play method runs game loop

// Tracks state and current turn
// Methods for moves & actions

// Checks effects of rooms
