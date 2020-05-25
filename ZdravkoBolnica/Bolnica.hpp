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
    void primi(Pacijent &P)
    {
        P1.getvektor().push_back(P);
    }
    void primi1(Osoblje* O)
    {
        svosoblje.push_back(O);
    }
    void otpusti()
    {
        string line1,line2;
        cin>>line1>>line2;
        for(auto i = P1.getvektor().begin(); i != P1.getvektor().end(); i++)
           if (i -> getime() == line1 && i->getprezime()==line2)
            {
                P1.getvektor().erase(i);
                cout << line1 <<" "<<line2<< " je otpusten" << endl;
                return;
            }
        cout << line1 <<" "<<line2<< " nije otpusten" << endl;
    }
    void listapacijenata()
    {
         for(auto i = P1.getvektor().begin(); i != P1.getvektor().end(); i++)
            cout<<*i;
    }
     void pretraga()
    {
         string line1,line2;
        cin>>line1>>line2;
        for(auto i = P1.getvektor().begin(); i != P1.getvektor().end(); i++)
           if (i -> getime() == line1 && i ->getprezime()==line2 )
            {
                cout << *i << endl;
            }
    }
      void upisi()
    {
            ofstream fajl;
            fajl.open ("Fajl.txt", ios_base::app);
            for(auto i = P1.getvektor().begin(); i != P1.getvektor().end(); i++)
            {
                fajl<<*i<<endl;
            }

            fajl.close();
    }
       void upisi1()
    {
            ofstream fajl;
            fajl.open ("Fajl.txt", ios_base::app);
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
        cin>>line1>>line2;
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
