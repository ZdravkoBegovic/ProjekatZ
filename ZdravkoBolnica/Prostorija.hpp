#ifndef PROSTORIJA_HPP_INCLUDED
#define PROSTORIJA_HPP_INCLUDED
#include <iostream>
using namespace std;
#include "Krevet.hpp"
#include "Pacijent.hpp"
class Prostorija
{
private:
int brojKreveta;
int brojSlobodnihKreveta;
int brojZauzetihKreveta;
vector < Pacijent > pacijenti;
Krevet K;
public:
    Prostorija( int w, int n, int l, stanje h, velicina j):K(h,j)
    {
     brojKreveta=w;
     brojSlobodnihKreveta=n;
     brojZauzetihKreveta=l;
    }
    vector <Pacijent> getvektor()
    {
        return pacijenti;
    }
friend ostream&operator<<(ostream&izlaz,const Prostorija& p)
    {
        izlaz<<"Prostorija - ispis"<<endl;
        izlaz<<"Broj Kreveta : "<<p. brojKreveta<<endl;
        izlaz<<"Broj Slobodnih Kreveta : "<<p. brojSlobodnihKreveta<<endl;
        izlaz<<"Broj Zauzetih Kreveta : "<<p. brojZauzetihKreveta<<endl;
        return izlaz;
    }



};


#endif // PROSTORIJA_HPP_INCLUDED
