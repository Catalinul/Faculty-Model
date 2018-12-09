#include "ActivityRepository.h"

Activity* ActivityRepository::findByOwner(Person* p)
{
	for (unsigned int i = 0; i < mActivities.size(); i++)
		if (mActivities[i]->getOwner() == p)
			return mActivities[i];
	return NULL;
}

Activity* ActivityRepository::findByLocation(Room* r)
{
	for (unsigned int i = 0; i < mActivities.size(); i++)
		if (mActivities[i]->getRoom() == r)
			return mActivities[i];
	return NULL;
}

void ActivityRepository::add(Activity* a)
{
	mActivities.push_back(a);
}

void ActivityRepository::remove(Person* p, Room* r)
{

	for (unsigned int i = 0; i < mActivities.size(); i++)
		if (mActivities[i]->getOwner() == p && mActivities[i]->getRoom() == r)
			mActivities.erase(mActivities.begin() + i);
}

