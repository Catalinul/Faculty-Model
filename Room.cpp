#include "Room.h"

Room::Room(std::string name)
{
    mName = name;
}

std::string Room::getName()
{
    return mName;
}

std::istream& operator>> (std::istream &read, Room& obj)
{
    read >> obj.mName;
    return read;
}

std::ostream& operator<< (std::ostream &write, const Room& obj)
{
    write<< obj.mName << '\n';
    return write;
}
