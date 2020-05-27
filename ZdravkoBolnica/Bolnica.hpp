#ifndef BOLNICA_HPP_INCLUDED
#define BOLNICA_HPP_INCLUDED
#include "Prostorija.hpp"
#include "Osoblje.hpp"
class Bolnica
{
private:
Prostorija P1;
vector < Osoblje*> svosoblje;
public:
    Bolnica(int a,int b,int c,stanje d,velicina e):P1(a,b,c,d,e)
    {

    }
     vector <Osoblje*> getvektor()
    {
        return svosoblje;
    }
    void primi1(Osoblje* O)
    {
        svosoblje.push_back(O);
    }
       void upisi1()
    {
            ofstream fajl;
            fajl.open ("Fajlosoblje.txt");
            for(auto i = svosoblje.begin(); i != svosoblje.end(); i++)
            {
                fajl<<**i<<endl;
            }

            fajl.close();
    }
    void ispisosoblja()
    {
         for(auto i = svosoblje.begin(); i != svosoblje.end(); i++)
            cout<<**i;
    }
     void otpusti1()
    {
        string line1,line2;
        cout<<"ime :"<<endl;
        cin>>line1;
        cout<<"prezime :"<<endl;
        cin>>line2;
        for(auto i = svosoblje.begin(); i != svosoblje.end(); i++)
           if ((*i) -> getIme() == line1 && (*i)->getPrezime()==line2)
            {
                svosoblje.erase(i);
                cout << line1 <<" "<<line2<< " je otstranjen" << endl;
                return;
            }
        cout << line1 <<" "<<line2<< " nije otstranjen" << endl;
    }

};

#endif // BOLNICA_HPP_INCLUDED
