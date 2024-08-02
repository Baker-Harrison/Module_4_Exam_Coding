//
// Created by Harrison Baker on 8/2/24.
//

#include "../include/Movie.h"

void Movie::play() {
	cout << director << "s " << year << " " << genre << " film " << name << ": " << plot << endl;
}



/*
string name;
string genre;
int year;
string director;
string plot;
 */
Movie::Movie()
{
	this->name = "Really Cool Movie";
	this->genre = "fantasy";
	this->year = 2000;
	this->director = "John Smithington";
	this->plot = "A super bad wizard is defeated by the good wizards";
}