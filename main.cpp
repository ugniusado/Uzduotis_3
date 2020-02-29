#include "v0.3.h"

int main() {
    vector <Student> A = {};
    cout << "Studentu kieki? 1-n" << endl;
    int n;
    try {
        cin >> n;
        if (n ==0 ||n<0) {
            throw(99);
            throw('x');
        }
    }
    catch (int x) { cout << "Iveskite sveikaji skaiciu nuo 1 iki 100000"<<endl; main(); }
    catch (char x) { cout << "Iveskite sveikaji skaiciu nuo 1 iki 100000" << endl; main(); }
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