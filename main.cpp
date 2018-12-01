#include <iostream>

#include "Person.h"
#include "Role.h"
#include "Activity.h"
#include "Room.h"
#include "TeacherRole.h"
#include "StudentRole.h"

using namespace std;

int main()
{
    std::vector<Person*> persons;
	std::vector<Room*> rooms;
	std::vector<Activity*> activities;

	persons.push_back(new Person("123456", "Ana", "Maria", "blabla@gmail.com"));
	rooms.push_back(new Room("301"));
	persons[0]->addRole(new StudentRole());
	activities.push_back(new Activity(rooms[0], persons[0], "Lab"));


    return 0;
}
