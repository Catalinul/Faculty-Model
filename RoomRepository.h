#ifndef ROOMREPOSITORY_H_INCLUDED
#define ROOMREPOSITORY_H_INCLUDED

#include<vector>
#include "Room.h"
#include "Repo.h"

class RoomRepository
{
public:
	Room* findByName(std::string);
};

#endif // PERSON_H_INCLUDED
