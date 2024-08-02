#include <iostream>
#include <ctime>
#include "include/Hero.h"
#include "include/Warrior.h"
#include "include/Mage.h"


#include "include/Playable.h"
#include "include/Record.h"
#include "include/Movie.h"
#include "include/Game.h"

using namespace  std;

void testHeroProgram();


int main()
{

	// testHeroProgram();


	Playable* playables[3];

	Game game;
	Movie movie;
	Record record;

	playables[0] = &game;
	playables[1] = &movie;
	playables[2] = &record;

	playables[0]->play();
	playables[1]->play();
	playables[2]->play();


	return 0;
}


void testHeroProgram()
{
	srand(time(0));

	Warrior warrior;
	Mage mage;


	Hero hero1 ("Michael", &warrior);
	Hero hero2 ("Randolph the Great", &mage);

	hero1.act();

	hero2.act();

}