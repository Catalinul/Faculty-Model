#include "RoomRepository.h"

Room * RoomRepository::findByName(std::string room)
{
	for (unsigned int i = 0; i < mRooms.size(); i++)
		if (mRooms[i]->getName() == room)
			return mRooms[i];
	return NULL;
}
