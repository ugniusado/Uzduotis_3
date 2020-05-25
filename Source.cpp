#include "Source.h"


int decision()
{
	cout << "Read from the file type '1'" << endl;
	cout << "Generate vector type '2'" << endl;
	cout << "Get vector speed type '3' " << endl;
	int integer;
	for (int i = 0; i < 1; i++)
	{
		cin >> integer;
		if (cin.fail() || ((integer != 1) && (integer != 2) && (integer != 3)))
		{
			cin.clear();
			cin.ignore();
			cout << "error" << endl;
			i--;
		}
	}
	cout << endl;
	return integer;
}

void DataGenerate(vector<Stud> & Student, int y)
{
	string name, surname;
	int b, sum, egz;
	vector<int> nd;
	double mid;
	for (int i = 0; i < y; i++)
	{
		name = "Vardenis" + std::to_string(i + 1);
		surname = "Pavardenis" + std::to_string(i + 1);
		for (int x = 0; x < 100; x++)
		{
			b = std::round(1 + (double)rand() / RAND_MAX * (10 - 1));
			nd.push_back(b);
		}
		egz = std::round(1 + (double)rand() / RAND_MAX * (10 - 1));
		sum = 0;
		for (int x = 0; x < 100; x++)
		{
			sum = sum + nd.at(x);
		}
		mid = 0.4 * sum / 100 + egz * 0.6;
		Stud a(name, surname, nd, egz, mid);
		Student.push_back(a);
	}
}
bool SortByLast(const Stud & a, const Stud & b)
{
	return a.GetLast() < b.GetLast();
}
bool compare(const Stud & a, const Stud & b) {
	return a.GetName() < b.GetName();
}