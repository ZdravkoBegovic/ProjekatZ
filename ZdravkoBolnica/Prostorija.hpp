#ifndef PROSTORIJA_HPP_INCLUDED
#define PROSTORIJA_HPP_INCLUDED
#include "Krevet.hpp"
class Prostorija
{
private:
int brojKreveta;
int brojSlobodnihKreveta;
int brojZauzetihKreveta;
Krevet k;
public:
    Prostorija( int w, int n, int l,stanje a, velicina b):Krevet(a,b)
    {
     brojKreveta=w;
     brojSlobodnihKreveta=n;
     brojZauzetihKreveta=l;
    }


};


#endif // PROSTORIJA_HPP_INCLUDED
