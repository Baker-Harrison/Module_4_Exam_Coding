//
// Created by Harrison Baker on 8/2/24.
//

#ifndef MODULE_4_EXAM_CODING_GAME_H
#define MODULE_4_EXAM_CODING_GAME_H


#include "Playable.h"

class Game: public Playable {
private:
	string name;
	string genre;
	int numPlayers;
	string winCondition;
	int playTime;
public:
	void play() override;
	Game();

};


#endif //MODULE_4_EXAM_CODING_GAME_H
