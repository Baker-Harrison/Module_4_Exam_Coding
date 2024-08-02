//
// Created by Harrison Baker on 8/2/24.
//

#include "../include/Hero.h"



Hero::Hero()
{

}
Hero::Hero(string name, Class* Class)
{
	this->name = name;
	this->Classs = Class;
}

string Hero::getName()
{
	return name;
}
Class* Hero::getClass()
{
	return Classs;
}

void Hero::setName(string newName)
{
	this->name = newName;
}
Class* Hero::setClass(Class* newClass)
{
	this->Classs = newClass;
}

void Hero::act()
{
	cout << name << " ";
	Classs->attack();

}