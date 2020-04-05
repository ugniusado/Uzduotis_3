#ifndef HEAD_H
#define HEAD_H
#include <iostream>
#include <iomanip>
#include <random>
#include <string>
#include <vector>
#include <fstream>
#include <cstdio>
#include <ctime>
#include <list>
#include <deque>
struct mokinys{
    std::string name;
    std::string srname;
    int ndgrades[15];
    double last;
    double mediana;
};
void read(int N, std::deque<mokinys>& B,std::vector<mokinys> A);
void sort(int N, std::deque<mokinys>& A);
#endif
