//
// Created by Harrison Baker on 8/2/24.
//

#ifndef MODULE_4_EXAM_CODING_RECORD_H
#define MODULE_4_EXAM_CODING_RECORD_H

#include <iostream>

using namespace std;

#include "Playable.h"

class Record : public Playable {
private:
	string artist;
	vector<string> tracks;

public:
	void play() override;
	Record();

};


#endif //MODULE_4_EXAM_CODING_RECORD_H
