//
// Created by Harrison Baker on 8/2/24.
//

#include "../include/Class.h"

string Class::getName() {
	return name;
}

void Class::setName(string &newName) {
	this->name = newName;
}

Class::Class() {
	this->name = "";
}

Class::Class(string name) {
	this->name = name;
}
