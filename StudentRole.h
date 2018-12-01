#ifndef STUDENTROLE_H_INCLUDED
#define STUDENTROLE_H_INCLUDED

#include "Role.h"

class StudentRole : public Role
{
public:
	StudentRole() : Role(STUDENT_ROLE) {};

};

#endif // STUDENTROLE_H_INCLUDED
