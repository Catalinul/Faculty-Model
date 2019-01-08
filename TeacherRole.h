#ifndef TEACHERROLE_H_INCLUDED
#define TEACHERROLE_H_INCLUDED

#include "Role.h"

class TeacherRole : public Role
{
public:
	TeacherRole() : Role(TEACHER_ROLE) {};
    void setID(int);
    int getID();

private:
    int mID;
};

#endif // TEACHERROLE_HPP_INCLUDED
