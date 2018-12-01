#include "Activity.h"

Activity::Activity(Room *room, Person *person, std::string description)
{
	mLocation = room;
	mOwner = person;
	mDescription = description;
}
