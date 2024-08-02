//
// Created by Harrison Baker on 8/2/24.
//

#ifndef MODULE_4_EXAM_CODING_WARRIOR_H
#define MODULE_4_EXAM_CODING_WARRIOR_H


#include "Class.h"

class Warrior : public Class {
private:
	string weaponName = "Sword";

public:
	Warrior();
	void attack();

};


#endif //MODULE_4_EXAM_CODING_WARRIOR_H
