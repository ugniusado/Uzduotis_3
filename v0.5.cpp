#include "v0.5.h"
void readFromFile(vector <Student>& A, list <Student> &B)
{
    ifstream fin("rezultatai.txt");
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
                A[i].ndgrades[j];
                vid += grade;
                j++;
            }
        }
        double vidurkis = vid / j * 1.0;
        //  cout << "Iveskite egzamino rezultata" << endl;
        fin >> A[i].egz;
        A[i].last = vidurkis * 0.4 + A[i].egz * 0.6;
        A[i].mediana = (vidurkis + A[i].egz) / 2;
        B.push_back(A[i]);
    }
    fin.close();
}
void read(vector <Student>& A)
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
            else if (grade == 11)break;
            else {
                A[i].ndgrades[j];
                vid += grade;
                j++;
            }
        }
        double vidurkis = vid / j * 1.0;
        cout << "Iveskite egzamino rezultata" << endl;
        cin >> A[i].egz;
        A[i].last = vidurkis * 0.4 + A[i].egz * 0.6;
        A[i].mediana = (vidurkis + A[i].egz) / 2;
        
    }

}

void generate(vector <Student>& A) {
    cout << "Kokio dydzio studentu sarasa noretumete generuoti?" << endl;
    int n;
    cin >> n;
    A.resize(n);
    ofstream fout("1.txt");
    for (auto i = 0; i < A.size(); i++)
    {   
        
        A[i].name = "Name" + to_string(i);
        A[i].srname = "Surname" + to_string(i);

        for (auto j = 0; j < 15; j++)
        {
            A[i].ndgrades[j] = (rand() % 10);
        }

        A[i].egz = rand() % 10;
       
        //ndgrades.erase(ndgrades.begin(), ndgrades.begin() + 5);
    }
}
void printFile(vector <Student> A)
{
    ofstream fout("1.txt");
   for (auto i = 0; i < A.size(); i++)
   {
       int index;
        fout << A[i].name ;
        index = A[i].name.length();
        for (int g = 0; g < 12 - index; g++)fout << " ";
        fout << A[i].srname;
        index = A[i].srname.length();
        for (int a = 0; a < 15 - index; a++)fout << " ";
        for (int j = 0; j < 15; j++)fout << A[i].ndgrades[j] << " ";
        fout << A[i].egz << endl;
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
        for (int j = 0; j < A.size() - 1; j++)
        {
            if (A[j].name > A[j + 1].name)
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
            if (A[j].srname > A[j + 1].srname)
            {
                Student t;
                t = A[j];
                A[j] = A[j + 1];
                A[j + 1] = t;
            }
        }
    }
}
void Paskirstymas(vector <Student> A, vector <Student>& Nuskriausti, vector <Student>& Kieti)
{
    ifstream fin("1.txt");
    int nusk = 0;
    int kiet = 0;
    for (auto i = 0; i < A.size(); i++)
    {
        if (A[i].last < 5)
        {
            Nuskriausti.resize(nusk + 1);
            Nuskriausti[nusk] = A[i];
            nusk++;
        }
        else if (A[i].last >= 5)
        {
            Kieti.resize(kiet + 1);
            Kieti[kiet] = A[i];
            kiet++;
        }
    }

}
void PrintIntoFile(list <Student> B)
{
    ofstream fout1("nuskriausti.txt");
    ofstream fout2("kieti.txt");
    list <Student>::iterator it;
    it = B.begin();
    while (it != B.end())
    {
        if (it->last < 5.0)
        {
            fout1 << it->name;
            for (int i = 0; i < 10 - 2; i++)
            {
                fout1 << " ";
            }
            fout1 << it->srname;
            for (int i = 0; i < 9; i++)
            {
                fout1 << " ";
            }
            fout1 << it->last << " ";
            fout1 << it->mediana << endl;
        }
        else
        {
            fout2 << it->name;
            for (int i = 0; i < 8; i++)
            {
                fout2 << " ";
            }
            fout2 << it->srname;
            for (int i = 0; i < 9; i++)
            {
                fout2 << " ";
            }
            fout2 << it->last << " " << it->mediana << endl;
        }
        it++;
    }
    fout1.close();
    fout2.close();


}
