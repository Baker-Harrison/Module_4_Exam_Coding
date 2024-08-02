//
// Created by Harrison Baker on 8/2/24.
//

#include "../include/Mage.h"


Mage::Mage() : Class::Class("Mage") {}


void Mage::castSpell(std::string spell)
{
	cout << "casting the " << spell << " spell" << endl;
}



string Mage::pickSpell() {


	int spellBookSize = spellBook.size();
	int randomNumber = rand() % static_cast<long>((spellBookSize - 1));

	string newSpell = spellBook[randomNumber];
	return newSpell;
}


void Mage::attack()
{
	cout << "The mage is ";
	castSpell(pickSpell());
}