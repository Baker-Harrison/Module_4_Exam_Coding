//
// Created by Harrison Baker on 8/2/24.
//

#ifndef MODULE_4_EXAM_CODING_MOVIE_H
#define MODULE_4_EXAM_CODING_MOVIE_H

#include "Playable.h"

class Movie: public Playable {
private:
string name;
string genre;
int year;
string director;
string plot;


public:
	void play() override;
	Movie();
};


#endif //MODULE_4_EXAM_CODING_MOVIE_H
