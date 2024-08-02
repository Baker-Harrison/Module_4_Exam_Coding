//
// Created by Harrison Baker on 8/2/24.
//

#include "../include/Warrior.h"

Warrior::Warrior() : Class::Class("Warrior")
{

}

void Warrior::attack()
{
	cout << "The warrior swings its " << weaponName << endl;
}