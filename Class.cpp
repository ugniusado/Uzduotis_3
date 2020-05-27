#include "Class.h"

using std::string;

Person::Person() {};

Person::Person(string v, string p)
{
	name = v;
	surname = p;
};

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
void Stud::SetName(std::string s)
{
	name = s;
};

void Stud::SetSurname(std::string s)
{
	surname = s;
}

Stud::Stud(const Stud& a)
{
	name = a.name;
	surname = a.surname;
	egz = a.egz;
	nd.reserve(a.nd.size());
	copy(a.nd.begin(), a.nd.end(), back_inserter(nd));
	mid = a.mid;
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
	return name;
}

double Stud::GetEgz() const
{
	return egz;
}

double Stud::GetLast() const
{
	return mid;
}