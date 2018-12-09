#ifndef ROOMREPOSITORY_H_INCLUDED
#define ROOMREPOSITORY_H_INCLUDED

#include "Room.h"
#include<vector>

class RoomRepository
{
public:
	Room* findByName(std::string);
	void add(Room*);
	void remove(std::string);

private:
	std::vector<Room*> mRooms;
};

#endif // PERSON_H_INCLUDED
