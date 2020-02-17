#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
using namespace std;
#define n 2 ///STUDENTU SKAICIUS
struct Student
{
    string name; ///STUDENTO VARDAS
    string srname; ///PAVARDE
    int ndgrades[10];
    int egz;
    double last; ///Galutinis pazymys
    double mediana;
};

void read(Student A[])
{for(int i = 0; i < n; i ++){
        cout << "Iveskite studento varda" << endl;
        cin >> A[i].name;
        cout << "Iveskite studento pavarde" << endl;
        cin >> A[i].srname;
        cout << "Iveskite nd rezultatus(11 = vedimo pabaiga,zemiausias balas 1)" << endl;
        int j = 0;
        double vid =0;
        while(true)
        {
            cin >> A[i].ndgrades[j];
            if(A[i].ndgrades[j]==0){cout<<"Netinkas pazymys"<<endl;
                cout<<"Programos pabaiga"<<endl;

            }
            else if (A[i].ndgrades[j]==11)break;
            vid+=A[i].ndgrades[j];
            j++;
        }
        double vidurkis = vid/j*1.0;
        cout << "Egzamino rezultatas?" <<endl;
        cin >> A[i].egz;
        A[i].last = vidurkis*0.4 + A[i].egz*0.6;
        A[i].mediana = (vidurkis+A[i].egz)/2;
    }

}

void generate(Student A[]) {
    for(int i=0; i<n; i++)
    {
        double vid=0;
        A[i].name = "Name" + to_string(rand()%100);
        A[i].srname = "Sirname" + to_string(rand()%100);
        for(int j=0; j<5; j++)
        {
            A[i].ndgrades[j] = rand()%10;
            vid+=A[i].ndgrades[j];
        }
        double vidurkis = vid/5*1.0, egz;
        A[i].egz = rand()%10;
        A[i].last = vidurkis*0.4 + A[i].egz*0.6;
        A[i].mediana = (vidurkis+A[i].egz)/2;
    }
}

void print(Student A[])
{
    cout << "PAVARDE     ||VARDAS      ||GALUTINIS BALAS ||Mediana" << endl;
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
        cout << A[i].mediana<<endl;


    }
}
int main() {
    Student A[n];
    bool yes;
    cout << "Ar norite duomenis suvesti(1) ar generuoti(0)?" << endl;
    cin >> yes;
    if(yes)read(A);
    else generate(A);
    print(A);

}