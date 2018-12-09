#ifndef PERSONREPOSITORY_H_INCLUDED
#define PERSONREPOSITORY_H_INCLUDED

#include<vector>
#include "Person.h"

class PersonRepository
{
public:
	//functii: add, find by, delete
	Person* findByFullName(std::string lName, std::string fName);
	Person* findByCNP(std::string cnp);
	void add(Person*);
	void remove(std::string);

private:
	std::vector<Person*> mPersons;

};

#endif // PERSON_H_INCLUDED
