#include "TeacherRole.h"

TeacherRole::TeacherRole(int id = 0)
    : Role(TEACHER_ROLE)
{
    mID = id;
}


void TeacherRole::setID(int id)
{
    mID = id;
}

int TeacherRole::getID()
{
    return mID;
}
