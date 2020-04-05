#include "v1.2.h"
using namespace std;
int main()
{
    int N;
    std::clock_t start, visas;
    cout<<"Studentu sk?"<<endl;
    cin>>N;
    deque<mokinys> B;
    vector<mokinys> A;
    visas = std::clock();
    start = std::clock();
    read(N, B, A);
    double duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
    cout<<"Nuskaitymas uztruko "<<duration<<" s"<<endl;
    start = std::clock();
    sort(N, B);
    duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;
    cout<<"rusiavimas uztruko "<<duration<<" s"<<endl;
    duration = ( std::clock() - visas ) / (double) CLOCKS_PER_SEC;
    cout<<"Visas kodas uztruko "<<duration<<" s"<<endl;
}
