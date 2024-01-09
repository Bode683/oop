#include "Game.h"
#include "Map.h"
#include "Room.h"
#include "Player.h"
#include "Monster.h"

int main() {

  // Seed random 
  srand(time(NULL));

  // Create game
  Game game;

  // Initialize
  game.initialize();

  // Play game
  game.play(); 

  // Cleanup memory
  delete game.getPlayer();
  delete game.getMonster();

  // Exit  
  return 0; 
}

// Entry point for program
// Handles setup and teardown
// Runs main game loop
