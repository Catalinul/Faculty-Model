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

Activity* ActivityRepository::findByDescription(std::string desc)
{
    for (unsigned int i = 0; i < mEntities.size(); i++)
        if (mEntities[i]->getDescription() == desc)
            return mEntities[i];
    return NULL;
}
