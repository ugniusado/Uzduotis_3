#include "Class.h"

using std::string;

Stud::Stud()
{
	egz = 0;
	mid = 0.0;
}
Stud::Stud(string vardas1, string pavarde1, std::vector<int> pz, int egz, double gal)
{
	name = vardas1;
	surname = pavarde1;
	nd.reserve(pz.size());
	copy(pz.begin(), pz.end(), back_inserter(nd));
	egz = egz;
	mid = gal;
}
Stud::Stud(string vardas1, string pavarde1, double gal)
{
	name = vardas1;
	surname = pavarde1;
	egz = 0;
	mid = gal;
}
Stud::~Stud()
{
}
string Stud::GetName() const
{
	return name;
}
string Stud::GetSurname() const
{
	return surname;
}
double Stud::GetEgz() const
{
	return egz;
}
double Stud::GetLast() const
{
	return mid;
}