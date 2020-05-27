#include <iostream>
#include <string>
#include <vector>

class Person {
protected:
	std::string name;
	std::string surname;
public:
	virtual void SetName(std::string) = 0;
	virtual void SetSurname(std::string) = 0;
	std::string GetName();
	std::string GetSurname();
	Person();
	Person(std::string, std::string);
};

class Stud : public Person {
public:
	Stud();
	Stud(std::string, std::string, std::vector<int>, int, double);
	Stud(std::string, std::string, double);
	void SetName(std::string);
	void SetSurname(std::string);
	~Stud();
	std::string GetName() const;
	std::string GetSurname() const;
	double GetEgz() const;
	double GetLast() const;
	Stud(const Stud&);
private:
	std::vector<int> nd;
	int egz;
	double mid;
};
