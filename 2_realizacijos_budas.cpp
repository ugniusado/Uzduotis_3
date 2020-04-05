
#include "v1.2.h"

void sort(int N, std::deque<mokinys>& A)
{
    std::ofstream maz("Vargsiukai.txt");
    std::ofstream daug("Kietiakai.txt");
    std::deque<mokinys>::iterator it;
    it = A.begin();
    while(it!=A.end()){
    if(it->last<5.0)
    {
        maz << it->name;
        for(int j=0; j<10-2; j++)
        {
            maz << " ";
        }
        maz << it->srname;
        for(int j=0; j<9; j++)
        {
            maz << " ";
        }
        maz << it->last << "  ";
        maz << it->mediana <<std::endl;
    }
    else
    {
        daug << it->name;
        for(int j=0; j<8; j++)
        {
            daug << " ";
        }
        daug << it->srname;
        for(int j=0; j<9; j++)
        {
            daug << " ";
        }
        daug << it->last << "  ";
        daug << it->mediana <<std::endl;
    }
    it++;
    }
}
void read(int N, std::deque<mokinys>& B, std::vector<mokinys> A){
    std::ifstream fin("Sarasas.txt");
    std::string laik;
    A.resize(N);
    double laikd;
    for(int i=0; i < A.size(); i++)
    {
        fin >> laik;
        A[i].name = laik;
        fin >> laik;
        A[i].srname = laik;
        fin >> laikd;
        A[i].last = laikd;
        fin >> laikd;

        A[i].mediana = laikd;
        B.push_back(A[i]);
    }
    fin.close();
}


