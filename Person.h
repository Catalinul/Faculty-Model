#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <string>
#include <vector>
#include "Role.h"

class Person
{
public:
	Person() {};
	Person(std::vector <Role*> Roles, std::string CNP, std::string FirstName, std::string LastName, std::string Email);
	void setCNP(std::string CNP);
	std::string getCNP() const;
	void setFirstName(std::string FirstName);
	std::string getFirstName() const;
	void setLastName(std::string LastName);
	std::string getLastName() const;
	void setEmail(std::string Email);
	std::string getEmail() const;
	friend std::istream& operator >> (std::istream& read, Person& obj);
	friend std::ostream& operator << (std::ostream& write, const Person& obj);
	void addRole(Role*);


protected:
	std::string mCNP;
	std::string mFirstName;
	std::string mLastName;
	std::string mEmail;
	std::vector<Role*> mRoles;


};

#endif // PERSON_H_INCLUDED
