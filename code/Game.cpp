#include "Game.h"

Game::Game() {
  map = Map(10, 10);
  
  // Create characters
  player = new Player("P");  
  monster = new Monster("M");
  
  gameOver = false;
  turn = 1; // player starts  
}

void Game::initialize() {

  // Generate map  
  generateMap(); 
  
  // Set start positions
  player->setCurrentRoom(map.getStart());
  monster->setCurrentRoom(map.getStart());   
}

void Game::play() {

  // Main game loop
  while (!isGameOver()) {

    // Notify characters 
    notifyCharacters();
    
    if(turn == 0) { 
      // Player turn
      takePlayerTurn();
      turn = 1;
    }
    else {
      // Monster turn
      takeMonsterTurn();
      turn = 0; 
    }
    
    checkGameOver();
    
  }

}  

// Game loop, alternating turns
// Calls other methods for game flow
// Keeps it simple for now
