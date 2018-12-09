#pragma once
#include <string>
#include "Person.hpp"
class Teacher : public Person
{
public:
	Teacher() {};
	Teacher(std::string CNP, std::string FirstName, std::string LastName, std::string Email, std::string Specializare) 
		: Person(CNP, FirstName, LastName, Email)
	{
		mSpecializare = Specializare;
	}

	void setSpecializare(std::string);
	std::string getSpecializare() const;
	friend std::istream& operator >> (std::istream& stream, Teacher& ob);
	friend std::ostream& operator << (std::ostream& stream, const Teacher& ob);

private:
	std::string mSpecializare;


};
