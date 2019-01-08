#ifndef ACTIVITYREPOSITORY_H_INCLUDED
#define ACTIVITYREPOSITORY_H_INCLUDED

#include<vector>
#include "Activity.h"
#include "Repo.h"

class ActivityRepository
{
public:
	Activity* findByOwner(Person*);
	Activity* findByLocation(Room*);
	Activity* findByDescription(std::string);

#endif // PERSON_H_INCLUDED
