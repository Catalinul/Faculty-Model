#ifndef ACTIVITY_H_INCLUDED
#define ACTIVITY_H_INCLUDED

#include <string>
#include "Room.h"
#include "Person.h"

class Activity
{
public:
	Activity(Room*, Person*, std::string);

private:
	Room* mLocation;
	Person* mOwner;
	std::string mDescription;

};

#endif // ACTIVITY_H_INCLUDED
