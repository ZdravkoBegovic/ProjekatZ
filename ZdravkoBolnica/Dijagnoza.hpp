#ifndef DIJAGNOZA_HPP_INCLUDED
#define DIJAGNOZA_HPP_INCLUDED
enum StanjePacijenta{lose,dobro};
class Dijagnoza
{
private:
    Bolest a;
    StanjePacijenta s;
public:
     Dijagnoza(StanjePacijenta p,tipBolesti v,podelaBolesti m,int d,vrstaLeka c):a(v,m,d,c)
    {
       s=p;
    }
};




#endif // DIJAGNOZA_HPP_INCLUDED

