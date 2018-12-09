#include "RoomRepository.h"

Room * RoomRepository::findByName(std::string room)
{
	for (unsigned int i = 0; i < mRooms.size(); i++)
		if (mRooms[i]->getName() == room)
			return mRooms[i];
	return NULL;
}

void RoomRepository::add(Room *r)
{
	mRooms.push_back(r);
}

void RoomRepository::remove(std::string name)
{

	for (unsigned int i = 0; i < mRooms.size(); i++)
		if (mRooms[i]->getName() == name)
			mRooms.erase(mRooms.begin() + i);
}
