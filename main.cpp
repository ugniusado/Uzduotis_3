#include "v0.3.h"

int main() {
    vector <Student> A = {};
    deque<Student> B = {};
 /*   cout << "Studentu kieki? 1-n" << endl;
    int n;
    try {
        cin >> n;
        if (n ==0 ||n<0) {
            throw(99);
            
        }
    }
    catch (int x) { cout << "Iveskite sveikaji skaiciu nuo 1 iki 100000"<<endl; main(); }
    
        A.resize(n);*/
     /*   
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
        else*/ 
        std::clock_t start, visas;
        visas = std::clock();
        start = std::clock();
        generate(A);
        printFile(A);
        double duration ;
       // SortBySirName(A);
        /* bool my_cmp(const Student & a, const Student & b)
        {
            // smallest comes first
            return a.srname.size() < b.srname.size();
        }

        std::sort(A.begin(), A.end(), my_cmp);*/
      
       
       start = std::clock();
       vector <Student>  Nuskriausti = {};
       vector <Student>  Kieti = {};
       readFromFile(A, B);
       duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
       cout << "Nuskaitymas uztruko " << duration << " s" << endl;
     //  Paskirstymas(, Nuskriausti, Kieti);
       A.clear();
       
       
       
       start = std::clock();
       PrintIntoFile(B);
        duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
        cout << "Nuskriaustu ir Kieteku i faila paskirstymas uztruko " << duration << " s" << endl;
       // print(A);
        B.clear();
    
   
   
}