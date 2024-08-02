//
// Created by Harrison Baker on 8/2/24.
//

#ifndef MODULE_4_EXAM_CODING_CLASS_H
#define MODULE_4_EXAM_CODING_CLASS_H


#include <iostream>

using namespace std;

class Class {
private:
	string name;

public:
	virtual void attack() = 0;
	string getName();
	void setName(string &newName);
	Class();
	Class(string name);
};


#endif //MODULE_4_EXAM_CODING_CLASS_H
