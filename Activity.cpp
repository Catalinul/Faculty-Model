#include "Activity.h"

Activity::Activity(Room *room, Person *person, std::string description)
{
	mLocation = room;
	mOwner = person;
	mDescription = description;
}

Room* Activity::getRoom()
{
	return mLocation;
}

Person* Activity::getOwner()
{
	return mOwner;
}