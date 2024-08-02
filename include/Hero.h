//
// Created by Harrison Baker on 8/2/24.
//

#ifndef MODULE_4_EXAM_CODING_HERO_H
#define MODULE_4_EXAM_CODING_HERO_H

#include "Class.h"

class Hero {
private:
string name;
Class* Classs;
public:
Hero();
Hero(string name, Class* Class);

string getName();
Class* getClass();

void setName(string newName);
Class* setClass(Class* newClass);
void act();
};


#endif //MODULE_4_EXAM_CODING_HERO_H
