#include "Discipline.h"

Discipline::Discipline(std::string subject, std::string type, std::vector<Activity*> activities)
{
    mSubject = subject;
    mType = type;
    mActivities = activities;
}

std::string Discipline::getSubject()
{
    return mSubject;
}
void Discipline::setSubject(std::string subject)
{
    mSubject = subject;
}

std::string Discipline::getType()
{
    return mType;
}

void Discipline::setType(std::string type)
{
    mType = type;
}

std::istream& operator >> (std::istream &read, Discipline& obj)
{
    read >> obj.mSubject;
    read >> obj.mType;
    return read;
}

std::ostream& operator << (std::ostream &write, const Discipline& obj)
{
    write << obj.mSubject;
    write << obj.mType;
    return write;
}
