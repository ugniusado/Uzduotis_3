#include "v1.0.h"

int main() {
    vector <Student> A = {};
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
        
        double duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
        cout << "Generavimas uztruko " << duration << " s" << endl;
        start = std::clock();
        SortBySirName(A);
        printFile(A);
        /* bool my_cmp(const Student & a, const Student & b)
        {
            // smallest comes first
            return a.srname.size() < b.srname.size();
        }

        std::sort(A.begin(), A.end(), my_cmp);*/
       duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
       cout << "Rusiavimas uztruko " << duration << " s" << endl;
       
       start = std::clock();
       vector <Student>  Nuskriausti = {};
       vector <Student>  Kieti = {};
       readFromFile(A);
       Paskirstymas(A, Nuskriausti, Kieti);
       A.clear();
       duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
       cout << "Paskirstymas uztruko " << duration << " s" << endl;
       start = std::clock();
        PrintIntoFile(Nuskriausti, Kieti);
        duration = (std::clock() - start) / (double)CLOCKS_PER_SEC;
        cout << "Nuskriaustu ir Kieteku i faila rasymas uztruko " << duration << " s" << endl;
       // print(A);
    
   
   
}