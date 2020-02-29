#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <fstream>
using namespace std;

struct Student
{
    string name; ///STUDENTO VARDAS
    string srname; ///PAVARDE
    int egz;
    double last; ///Galutinis pazymys
    double mediana;
};
void readFromFile(vector <Student>& A, vector<int> ndgrades);
void read(vector <Student>& A, vector<int> ndgrades);
void generate(vector <Student>& A, vector<int> ndgrades);
void print(vector <Student> A);
void SortByName(vector <Student>& A);
void SortBySirName(vector <Student>& A);



