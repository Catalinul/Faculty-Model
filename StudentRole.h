#ifndef STUDENTROLE_H_INCLUDED
#define STUDENTROLE_H_INCLUDED

#include "Role.h"

class StudentRole : public Role
{
public:
	StudentRole() : Role(STUDENT_ROLE) {};
    void setID(int);
    int getID();
    void setDomain(std::string domain);
    std::string getDomain();

private:
    private:
    int mID;
    std::string mDomain;
};

#endif // STUDENTROLE_H_INCLUDED
