#ifndef ACTIVITYREPOSITORY_H_INCLUDED
#define ACTIVITYREPOSITORY_H_INCLUDED
#include "Activity.h"

class ActivityRepository
{
public:
	Activity* findByOwner(Person*);
	Activity* findByLocation(Room*);
	void add(Activity*);
	void remove(Person*, Room*);

private:
	std::vector<Activity*> mActivities;
};

#endif // PERSON_H_INCLUDED
