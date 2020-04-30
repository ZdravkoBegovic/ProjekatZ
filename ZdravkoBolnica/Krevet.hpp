#ifndef KREVET_HPP_INCLUDED
#define KREVET_HPP_INCLUDED
#include <iostream>
using namespace std;
enum stanje {zauzet,slobodan};
enum velicina {veliki, mali};
class Krevet
{
private:
stanje s;
velicina d;
public:
    Krevet(stanje x,velicina y)
    {
        s=x;
        d=y;
    }
    void zauzmiKrevet()
    {
        if(s=1)
        {
           s=0;
           cout<<"Krevet je zauzet";
        }
    }
    void oslobodiKrevet()
    {
        if(s=0)
        {
           s=;
           cout<<"Krevet je oslobodjen";
        }
    }
};


#endif // KREVET_HPP_INCLUDED
