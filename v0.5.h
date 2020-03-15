#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <fstream>
#include <algorithm>
#include <list>
#include <deque>
using namespace std;

struct Student
{
    string name; ///STUDENTO VARDAS
    string srname; ///PAVARDE
    int egz;
    double last; ///Galutinis pazymys
    int ndgrades[15];
    double mediana;
};
void readFromFile(vector <Student>& A, deque <Student> &B);
void rusiavimas(list <Student> B);
void read(vector <Student>& A);
void generate(vector <Student>& A);
void print(vector <Student> A);
void SortByName(vector <Student>& A);
void SortBySirName(vector <Student>& A);
void printFile(vector <Student> A);
void Paskirstymas(vector <Student> A, vector <Student>& Nuskriausti, vector <Student>& Kieti);
void PrintIntoFile(deque <Student> B);
bool my_cmp(const Student& a, const Student& b);



