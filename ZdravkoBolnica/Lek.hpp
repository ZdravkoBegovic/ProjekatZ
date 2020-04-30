#ifndef LEK_HPP_INCLUDED
#define LEK_HPP_INCLUDED
enum vrstaLeka(tableta,kapi,sirup,kapsula,vakcina)
class Lek
{
private:
    int doza;
    vrstaLeka s;
public:
    Lek( int x, vrstaLeka y)
    {
        doza=x;
        s=y;
    }
};



#endif // LEK_HPP_INCLUDED
