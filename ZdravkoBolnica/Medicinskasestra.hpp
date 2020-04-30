#ifndef MEDICINSKASESTRA_HPP_INCLUDED
#define MEDICINSKASESTRA_HPP_INCLUDED
#include "Osoblje.hpp"
enum Smena{Prva, Druga, Treca};
class MedicinskaSestra:public Osoblje
{
private:
  Smena z;
public:
    MedicinskaSestra(smena x)
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
