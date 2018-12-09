#include "PersonRepository.h"

Person * PersonRepository::findByFullName(std::string lName, std::string fName)
{
	std::vector<Person*>::iterator i;
	for ( i = mPersons.begin(); i != mPersons.end(); ++i)
		if ((*i)->getLastName() == lName && (*i)->getFirstName() == fName)
			return *i;
	return NULL;
}

Person * PersonRepository::findByCNP(std::string cnp)
{
	for (unsigned int i = 0; i < mPersons.size(); i++)
		if (mPersons[i]->getCNP() == cnp)
			return mPersons[i];
	return NULL;
}

void PersonRepository::add(Person *p)
{
	mPersons.push_back(p);
}

void PersonRepository::remove(std::string cnp)
{
	for (unsigned int i = 0; i < mPersons.size(); i++)
		if (mPersons[i]->getCNP() == cnp)
			mPersons.erase(mPersons.begin() + i);
}
