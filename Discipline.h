#ifndef DISCIPLINE_HPP_INCLUDED
#define DISCIPLINE_HPP_INCLUDED

#include <vector>
#include <string>

#include "Activity.h"

class Discipline
{
public:
    Discipline(){};
    Discipline(std::string subject, std::string type, std::vector<Activity*> activities);

    std::string getSubject();
    void setSubject(std::string subject);
    std::string getType();
    void setType(std::string type);

    friend std::istream& operator >> (std::istream& read, Discipline& obj);
    friend std::ostream& operator << (std::ostream& write, const Discipline& obj);

private:
    std::string mSubject;
    std::string mType;
    std::vector<Activity*> mActivities;
};

#endif
