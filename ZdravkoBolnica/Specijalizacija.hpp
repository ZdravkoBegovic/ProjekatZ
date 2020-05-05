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
};


#endif // SPECIJALIZACIJA_HPP_INCLUDED
