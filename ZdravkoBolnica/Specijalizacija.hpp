#ifndef SPECIJALIZACIJA_HPP_INCLUDED
#define SPECIJALIZACIJA_HPP_INCLUDED
enum OblastSpecijalizacije{Hirurgija, InternaMedicina, Derematologija};
enum VrstaSpecijalizacije {uskaSpecijalizacija,sirokaSpecijalizacija};
class Specijalizacija
{
private:
OblastSpecijalizacije o;
VrstaSpecijalizacije v;

public:
     Specijalizacija(OblastSpecijalizacije a, VrstaSpecijalizacije b)
    {
        o=a;
        v=b;
    }
    friend ostream&operator<<(ostream&izlaz,const Specijalizacija& d)
    {
        izlaz<<"Specijalizacija- ispis"<<endl;
        izlaz<<"Oblast specijalizacije je "<<d.o<<endl;
        izlaz<<"Vrsta specijalizacije je "<<d.v<<endl;

        return izlaz;
    }
};


#endif // SPECIJALIZACIJA_HPP_INCLUDED
