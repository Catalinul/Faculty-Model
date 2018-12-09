#include "Room.h"

Room::Room(std::string name)
{
	mName = name;
}


std::string Room::getName()
{
	return mName;
}
