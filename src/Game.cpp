//
// Created by Harrison Baker on 8/2/24.
//

#include "../include/Game.h"

void Game::play() {
	cout << name << ", a(n) " << genre << " game for " << numPlayers << " players where players try to "
			<< winCondition << "." << endl << "Each game takes about " << playTime << " minutes." << endl;
}


Game::Game()
{
	this->name = "Elden Ring";
	this->genre = "RPG";
	this->numPlayers = 1;
	this->winCondition = "beat the final boss";
	this->playTime = 120;
}