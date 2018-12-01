#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED

#include <string>
#include <vector>
#include "Role.h"

class Person
{
public:
	Person() {};
	Person(std::string, std::string, std::string, std::string );
	void setCNP(std::string);
	std::string getCNP() const;
	void setFirstName(std::string);
	std::string getFirstName() const;
	void setLastName(std::string);
	std::string getLastName() const;
	void setEmail(std::string);
	std::string getEmail() const;
	friend std::istream& operator >> (std::istream& stream, Person& ob);
	friend std::ostream& operator << (std::ostream& stream, const Person& ob);
	void addRole(Role*);


protected:
	std::string mCNP;
	std::string mFirstName;
	std::string mLastName;
	std::string mEmail;
	std::vector<Role*> mRoles;


};

#endif // PERSON_H_INCLUDED
