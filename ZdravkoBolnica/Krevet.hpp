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
        if(s=slobodan)
        {
           s=zauzet;
           cout<<"Krevet je zauzet";
        }
    }
    void oslobodiKrevet()
    {
        if(s=zauzet)
        {
           s=slobodan;
           cout<<"Krevet je oslobodjen";
        }
    }
};


#endif // KREVET_HPP_INCLUDED
