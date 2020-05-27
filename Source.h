# ifndef Source_H
# define Source_H

#include "Class.h"
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <ctime>
#include <iterator>
#include <chrono>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;


int decision();
template<typename T1>
void DataRead(T1& Student, int& longName, int& longSurn)
{
	string Last;
	int a, sum, b = 0;
	std::ifstream fin("SourceFile.txt");
	if (fin)
	{
		string name, surname;
		vector<int> nd;
		double mid;
		int egz;
		fin >> Last >> Last >> Last;
		while (Last[0] == 'N')
		{
			b++;
			fin >> Last;
		}
		while (!fin.eof())
		{
			fin >> name;
			if (name.length() > longName - 2) longName = name.length() + 2;
			fin >> surname;
			if (surname.length() > longSurn - 2) longSurn = surname.length() + 2;
			sum = 0;
			for (int i = 0; i < b; i++)
			{
				fin >> a;
				nd.push_back(a);
				sum = sum + a;
			}
			fin >> egz;
			if (b != 0) mid = 0.4 * sum / b + a * 0.6;
			else mid = a * 0.6;
			Stud b(name, surname, nd, egz, mid);
			nd.clear();
			Student.push_back(b);
		}
		fin.close();
	}
	else
	{
		cout << "No file, to read from" << endl;
		return ;
	}
};
void DataGenerate(vector<Stud>& Student, int y);
void DataInput(vector<Stud>& Student, int& longName, int& longSurn);
bool SortByLast(const Stud& a, const Stud& b);
bool compare(const Stud& a, const Stud& b);
template<typename T1, typename T2, typename T3>
void DataDis(T1& Student, T2& Nuskriaustieji, T3& Kietiakai)
{
	std::sort(Student.begin(), Student.end(), compare);
	std::sort(Student.begin(), Student.end(), SortByLast);
	int x = Student.size();
	for (int i = 0; i < x; i++)
	{
		if (Student.at(i).GetLast() < 5)
		{
			Nuskriaustieji.push_back(Student.at(i));
			Student.erase(Student.begin() + i);
			i--;
			x--;
		}
	}
};
template<typename T>
void DataOutput(T Student, int longName, int longSurn, string x)
{
	auto it = Student.begin();
	std::ofstream fout(x);
	int a = Student.size();
	for (int i = 0; i < a; i++)
	{
		fout << std::left << std::setw(longName) << it->GetName() << std::setw(longSurn) << it->GetSurname() << std::setprecision(3) << it->GetLast() << endl;
		it++;
	}
	fout.close();
};

# endif //Source_H
