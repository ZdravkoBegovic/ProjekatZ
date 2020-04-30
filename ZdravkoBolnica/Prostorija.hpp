#ifndef PROSTORIJA_HPP_INCLUDED
#define PROSTORIJA_HPP_INCLUDED
#include <iostream>
using namespace std;
#include "Krevet.hpp"

class Prostorija
{
private:
int brojKreveta;
int brojSlobodnihKreveta;
int brojZauzetihKreveta;
Krevet K;
public:
    Prostorija( int w, int n, int l, stanje h, velicina j):K(h,j)
    {
     brojKreveta=w;
     brojSlobodnihKreveta=n;
     brojZauzetihKreveta=l;
    }


};


#endif // PROSTORIJA_HPP_INCLUDED
