#include "StudentRole.h"

StudentRole::StudentRole(int id = 0, std::string domain = "CTI")
    : Role(STUDENT_ROLE)
{
    mID = id;
    mDomain = domain;
}


void StudentRole::setID(int id)
{
    mID = id;
}

int StudentRole::getID()
{
    return mID;
}

void StudentRole::setDomain(std::string domain)
{
    mDomain = domain;
}

std::string StudentRole::getDomain()
{
    return mDomain;
}
