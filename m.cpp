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
ifstream fin("rezultatai.txt");
void readFromFile(vector <Student> &A, vector<int> ndgrades)
{
    for (auto i = 0; i < A.size(); i++) {
        fin >> A[i].name;
        fin >> A[i].srname;
        int j = 0;
        double vid = 0;
        int grade;
        while (true)
        {
            fin >> grade;
            if (grade == 0) {
                cout << "ivedete bloga pazymi" << endl;
                cout << "Programos pabaiga" << endl;
            }
            else if (j == 14)break;
            else {
                ndgrades.push_back(grade);
                vid += grade;
                j++;
            }
        }
        double vidurkis = vid / j * 1.0;
      //  cout << "Iveskite egzamino rezultata" << endl;
        fin >> A[i].egz;
        A[i].last = vidurkis * 0.4 + A[i].egz * 0.6;
        A[i].mediana = (vidurkis + A[i].egz) / 2;
        ndgrades.erase(ndgrades.begin(), ndgrades.begin() );
    }

}
void read(vector <Student> &A, vector<int> ndgrades)
{
    for (auto i = 0; i < A.size(); i++) {

        cout << "Iveskite studento varda" << endl;
        cin >> A[i].name;
        cout << "Iveskite studento pavarde" << endl;
        cin >> A[i].srname;
        cout << "Iveskite nd rezultatus(11 = vedimo pabaiga,zemiausias balas 1)" << endl;
        int j = 0;
        double vid = 0;
        int grade;
        while (true)
        {
            cin >> grade;
            if (grade == 0) {
                cout << "ivedete bloga pazymi" << endl;
                cout << "Programos pabaiga" << endl;
            }
            else if (grade ==11)break;
            else {
                ndgrades.push_back(grade);
                vid += grade;
                j++;
            }
        }
        double vidurkis = vid / j * 1.0;
        cout << "Iveskite egzamino rezultata" << endl;
        cin >> A[i].egz;
        A[i].last = vidurkis * 0.4 + A[i].egz * 0.6;
        A[i].mediana = (vidurkis + A[i].egz) / 2;
        ndgrades.erase(ndgrades.begin(), ndgrades.begin());
    }

}

void generate(vector <Student> &A, vector<int> ndgrades) {
   
    for (auto i = 0; i <  A.size(); i++)
    {
        double vid = 0;
        A[i].name = "Name" + to_string(rand() % 100);
        A[i].srname = "Sirname" + to_string(rand() % 100);

        for (auto j = 0; j < 5; j++)
        {
            ndgrades.push_back(rand() % 10);
            vid += ndgrades.at(j);
        }

        double vidurkis = vid / 5 * 1.0;
        A[i].egz = rand() % 10;
        A[i].last = vidurkis * 0.4 + A[i].egz * 0.6;
        A[i].mediana = (vidurkis + A[i].egz) / 2;
        ndgrades.erase(ndgrades.begin(), ndgrades.begin() + 5);
    }
}

void print(vector <Student> A)
{
    
    cout << "PAVARDE      |VARDAS       |GALUTINIS BALAS  |Mediana" << endl;
    for (auto i = 0; i < A.size(); i++)
    {
        cout << A[i].srname;
        for (int g = 0; g < 12 - A[i].srname.length(); g++)
            cout << " ";
        cout << " |";
        cout << A[i].name;
        for (int g = 0; g < 12 - A[i].name.length(); g++)
            cout << " ";
        cout << " |";
        cout << fixed << setprecision(2) << A[i].last;
        for (int g = 0; g < 12; g++)
            cout << " ";
        cout << " |";
        cout << fixed << setprecision(2) << A[i].mediana << endl;


    }
}
void SortByName(vector <Student>& A)
{
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < A.size()-1; j++)
        {
            if (A[j].name < A[j + 1].name)
            {
                Student t;
                t = A[j];
                A[j] = A[j + 1];
                A[j + 1] = t;
            }
        }
    }
}
void SortBySirName(vector <Student>& A)
{
    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < A.size() - 1; j++)
        {
            if (A[j].srname < A[j + 1].srname)
            {
                Student t;
                t = A[j];
                A[j] = A[j + 1];
                A[j + 1] = t;
            }
        }
    }
}
int main() {
    vector <Student> A = {};
    cout << "Studentu kieki? 0-n" << endl;
    int n;
    cin >> n;
    if (cin.fail()||n==0) {
        cout << "Perkovus programa iveskite sveikaji skaitmeni nuo 1 iki n" << endl;
        return 0;
    }
    A.resize(n);
    vector<int> ndgrades = {};
    bool yes;
    cout << "Ar norite duomenis suvesti(1) ar generuoti(0)?" << endl;
    cin >> yes;
    if (cin.fail()) {
        cout << "Perkovus programa iveskite 1 arba 0" << endl;
        return 0;
    }
    if (yes)
    {
        cout << "Is failo(1) ar ranka(0)?" << endl;
        cin >> yes;
        if (cin.fail()) {
            cout << "Perkovus programa iveskite 1 arba 0" << endl;
            return 0;
        }
        if (yes)readFromFile(A, ndgrades);
        else read(A, ndgrades);
    }
    else generate(A, ndgrades);
    cout << "Rikiuoti studentu sarasa pagal Vardus(1) ar Pavardes(0)" << endl;
    cin >> yes;
    if (cin.fail()) {
        cout << "Perkovus programa iveskite 1 arba 0" << endl;
        return 0;
    }
    if (yes)SortByName(A);
    else SortBySirName(A);
    print(A);

  
   
}