#include "AdministrativeRole.h"

AdministrativeRole::AdministrativeRole(int id = 0)
    : Role(ADMINISTRATIVE_ROLE)
{
    mID = id;
}


void AdministrativeRole::setID(int id)
{
    mID = id;
}

int AdministrativeRole::getID()
{
    return mID;
}
