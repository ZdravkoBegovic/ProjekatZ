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
    void upisi()
    {
        ofstream fajl;
        fajl.open ("Fajl.txt");
        for(auto i = pacijenti.begin(); i != pacijenti.end(); i++)
        {
            fajl<<*i<<endl;
        }

        fajl.close();
    }
       void otpusti()
    {
        string line1,line2;
        cout<<"ime :"<<endl;
        cin>>line1;
        cout<<"prezime"<<endl;
        cin>>line2;
        for(auto i = pacijenti.begin(); i != pacijenti.end(); i++)
           if (i -> getime() == line1 && i->getprezime()==line2)
            {
                pacijenti.erase(i);
                cout << line1 <<" "<<line2<< " je otpusten" << endl;
                return;
            }
        cout << line1 <<" "<<line2<< " nije otpusten" << endl;
    }
    void primi(Pacijent &P)
    {
        pacijenti.push_back(P);
    }
         void pretraga()
    {
         string line1,line2;
        cout<<"ime :"<<endl;
        cin>>line1;
        cout<<"prezime"<<endl;
        cin>>line2;
        for(auto i = pacijenti.begin(); i != pacijenti.end(); i++)
           if (i -> getime() == line1 && i ->getprezime()==line2 )
            {
                cout << *i << endl;
            }
    }
        void listapacijenata()
    {
         for(auto i = pacijenti.begin(); i != pacijenti.end(); i++)
            cout<<*i;
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
