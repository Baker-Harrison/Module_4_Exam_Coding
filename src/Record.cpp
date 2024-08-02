//
// Created by Harrison Baker on 8/2/24.
//

#include "../include/Record.h"

void Record::play() {
	int counter = 1;
	for (string track : tracks)
	{
		cout << "track " << counter << ": " << track << endl;
	}
}


Record::Record()
{
	this->artist = "Timmy Johnson";
	this->tracks = {"Test track 1" , "Test track 2", "Test track 3"};
}