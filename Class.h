#include <iostream>
#include <string>
#include <vector>


class Stud
{
	public:

		Stud();

		Stud(std::string, std::string, std::vector<int>, int, double);

		Stud(std::string, std::string, double);

		~Stud();
	
		std::string GetName() const;

		std::string GetSurname() const;

		double GetEgz() const;

		double GetLast() const;

	private:

		std::string name;
		std::string surname;
		std::vector<int> nd;
		int egz;
		double mid;
};