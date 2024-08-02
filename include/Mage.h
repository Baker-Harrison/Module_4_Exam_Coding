//
// Created by Harrison Baker on 8/2/24.
//

#ifndef MODULE_4_EXAM_CODING_MAGE_H
#define MODULE_4_EXAM_CODING_MAGE_H


#include "Class.h"


class Mage : public Class{
private:
	vector<string> spellBook = {"fire", "freeze", "water", "undead"};

public:
	Mage();
	void castSpell(string spell);
	string pickSpell();
	void attack() override;
};


#endif //MODULE_4_EXAM_CODING_MAGE_H
