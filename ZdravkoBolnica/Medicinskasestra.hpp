#ifndef MEDICINSKASESTRA_HPP_INCLUDED
#define MEDICINSKASESTRA_HPP_INCLUDED
#include "Osoblje.hpp"
enum Smena{Prva, Druga, Treca};
class MedicinskaSestra:public Osoblje
{
private:
  Smena z;
public:
    MedicinskaSestra(Smena x,int j,pol p,int f,string a,string g):Osoblje(j,p,f,a,g)
    {
        z=x;
    }
   void promenaSmene(Smena a)
   {
       if(z!=a)
       {
           z=a;
       }

   }
};

#endif // MEDICINSKASESTRA_HPP_INCLUDED
