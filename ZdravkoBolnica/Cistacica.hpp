#ifndef CISTACICA_HPP_INCLUDED
#define CISTACICA_HPP_INCLUDED
#include "Osoblje.hpp"
class Cistacica : public Osoblje
{
protected:
    int brojRadnihSati;
public:
    Cistacica(int b,int s,pol o,int n,string h,string j):Osoblje(s,o,n,h,j)
    {
        brojRadnihSati=b;
    }
};



#endif // CISTACICA_HPP_INCLUDED
