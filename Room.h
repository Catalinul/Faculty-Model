#ifndef ROOM_H_INCLUDED
#define ROOM_H_INCLUDED

#include <string>

class Room
{
public:
    Room(){};
	Room(std::string);
	std::string getName();

	friend std::istream& operator>> (std::istream &read, Room& obj);
    friend std::ostream& operator<< (std::ostream &write, const Room& obj);


private:
	std::string mName;
};


#endif // ROOM_H_INCLUDED
