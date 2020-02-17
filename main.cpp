#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;
#define n 2 // Studentu skaicius ///NORINT KEISTI ISVEDAMUS STUDENTU KEISTI KINTAMAJI N
struct Student
{
    string name; ///STUDENTO VARDAS
    string srname; ///PAVARDE
   // int ndgrades[10]; /// Keiciam strukturos kintamaji i vektoriaus
    int egz;
    double last; ///Galutinis pazymys
    double mediana;
};

void read(Student A[], vector<int> ndgrades)
{for(int i = 0; i < n; i ++){
        cout << "Iveskite studento varda" << endl;
        cin >> A[i].name;
        cout << "Iveskite studento pavarde" << endl;
        cin >> A[i].srname;
        cout << "Iveskite nd rezultatus(11 = vedimo pabaiga,zemiausias balas 1)" << endl;
        int j = 0;
        double vid = 0;
        int grade;
        while(true)
        {
            cin >> grade;
            if(grade==0){cout<<"ivedete bloga pazymi"<<endl;
                cout<<"Programos pabaiga"<<endl;

            }
            else if (grade==11)break;
            else{
                ndgrades.push_back(grade);
                vid+=grade;
                j++;}
        }
        double vidurkis = vid/j*1.0;
        cout << "Iveskite egzamino rezultata" <<endl;
        cin >> A[i].egz;
        A[i].last = vidurkis*0.4 + A[i].egz*0.6;
        A[i].mediana = (vidurkis+A[i].egz)/2;
        ndgrades.erase(ndgrades.begin(),ndgrades.begin()+i);
    }

}

void generate(Student A[], vector<int> ndgrades) {
    for(int i=0; i<n; i++)
    {
        double vid=0;
        A[i].name = "Name" + to_string(rand()%100);
        A[i].srname = "Sirname" + to_string(rand()%100);

            for(int j=0; j<5; j++)
            {
                ndgrades.push_back(rand()%10);
                vid+=ndgrades.at(j);
            }

        double vidurkis = vid/5*1.0;
        A[i].egz = rand()%10;
        A[i].last = vidurkis*0.4 + A[i].egz*0.6;
        A[i].mediana = (vidurkis+A[i].egz)/2;
        ndgrades.erase(ndgrades.begin(),ndgrades.begin()+5);
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
        cout <<fixed << setprecision(2)<< A[i].mediana<<endl;


    }
}
int main() {
    Student A[n];
    vector<int> ndgrades = {};
    bool yes;
    cout << "Ar norite duomenis suvesti(1) ar generuoti(0)?" << endl;
    cin >> yes;
    if(yes)read(A,ndgrades);
    else generate(A, ndgrades);
    print(A);

}