#ifndef PERSONREPOSITORY_H_INCLUDED
#define PERSONREPOSITORY_H_INCLUDED

#include<vector>
#include "Repo.h"
#include "Person.h"

class PersonRepository
{
public:

	Person* findByFullName(std::string lName, std::string fName);
	Person* findByCNP(std::string cnp);

};

#endif // PERSON_H_INCLUDED
