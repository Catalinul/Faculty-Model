#include "pch.h"
#include"Teacher.hpp"


void Teacher::setSpecializare(std::string specializare)
{
	mSpecializare = specializare;
}

std::istream & operator>>(std::istream & stream, Teacher & ob)
{
	stream >> ob.mCNP >> ob.mFirstName >> ob.mLastName >> ob.mEmail >> ob.mSpecializare;
	return stream;
}

std::ostream & operator<<(std::ostream & stream, const Teacher & ob)
{
	stream << ob.mCNP << '\n' << ob.mFirstName << '\n' << ob.mLastName << '\n' << ob.mEmail << '\n' << ob.mSpecializare << '\n';

	return stream;
}
