#ifndef ADMINISTRATIVEROLE_H_INCLUDED
#define ADMINISTRATIVEROLE_H_INCLUDED

#include "Role.h"

class AdministrativeRole : public Role
{
public:
	AdministrativeRole() : Role(ADMINISTRATIVE_ROLE) {};
    void setID(int);
    int getID();

private:
    int mID;
};

#endif
