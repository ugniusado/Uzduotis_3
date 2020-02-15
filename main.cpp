#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
using namespace std;
#define n 5 ///STUDENTU SKAICIUS
struct Student
{
    string name;
    string srname;
    int nd;
    int egz;
    double last;
};
double findMedian(Student A[]);
void read(Student A[])
{for(int i = 0; i < n; i ++){
        cout << "Iveskite studento varda" << endl;
        cin >> A[i].name;
        cout << "Iveskite studento pavarde" << endl;
        cin >> A[i].srname;
        cout << "Iveskite nd rezultatus" << endl;
        cin >> A[i].nd;
        cout << "Iveskite egz rezultatus" << endl;
        cin >> A[i].egz;
    }
}
void generate(Student A[])
{
    for(int  i = 0; i < n; i++)
    {
        cout << "Iveskite studento varda" << endl;
        cin >> A[i].name;
        cout << "Iveskite studento pavarde" << endl;
        cin >> A[i].srname;
        A[i].nd = rand()%10+1;
        A[i].egz = rand()%10+1;
    }
}
void lastb(Student A[])
{
    for(int i = 0; i < n; i ++)
        A[i].last = A[i].nd*0.4+A[i].egz*0.6;
}
void print(Student A[])
{
    cout << "PAVARDE     ||VARDAS      ||GALUTINIS BALAS||Mediana" << endl;
    for(int i =0; i < n; i ++)
    {
        cout << A[i].srname ;
        for(int g = 0; g <12-A[i].srname.length();g++)
            cout <<" ";
        cout << "||";
        cout << A[i].name;
        for(int g = 0; g <12-A[i].name.length();g++)
            cout <<" ";
        cout << "||";
        cout << fixed << setprecision(2)<<A[i].last;
        for(int g=0; g <12; g++)
            cout <<" ";
        cout <<"||";
        cout <<findMedian(A)<<endl;

    }
}
void sortByGalutinis(Student A[])
{ int i, j;
    Student B;
    for (i = 0; i < n-1; i++)
        for (j = 0; j < n-i-1; j++)
            if (A[j].last > A[j+1].last)
            { B = A[j];
                A[j] = A[j+1];
                A[j+1] = B;
            }
}
double findMedian(Student A[])
{
    if (n % 2 != 0)
        return (double)A[n / 2].last;

    return (double)(A[(n - 1) / 2].last + A[n / 2].last) / 2.0;
}
int main() {
    Student A[n];
    bool yes;
    cout << "Ar norite duomenis suvesti(1) ar generuoti(0)?" << endl;
    cin >> yes;
    if(yes)read(A);
    else generate(A);
    lastb(A);
    sortByGalutinis(A);
    print(A);

}