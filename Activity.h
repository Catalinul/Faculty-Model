#ifndef ACTIVITY_H_INCLUDED
#define ACTIVITY_H_INCLUDED

#include <string>
#include "Room.h"
#include "Person.h"

class Activity
{
public:
    Activity(){};
	Activity(Room*, Person*, std::string);
	Room* getRoom() const;
	Person* getOwner() const;
    std::string getDescription() const;

    friend std::istream& operator >> (std::istream &read, Activity& obj);
    friend std::ostream& operator << (std::ostream &write, const Activity& obj);

private:
	Room* mLocation;
	Person* mOwner;
	std::string mDescription;

};

#endif // ACTIVITY_H_INCLUDED
