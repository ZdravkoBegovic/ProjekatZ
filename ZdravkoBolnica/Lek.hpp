#ifndef LEK_HPP_INCLUDED
#define LEK_HPP_INCLUDED

enum vrstaLeka{tableta,kapi,sirup,kapsula,vakcina};

class Lek
{
private:
    int doza;
    vrstaLeka s;
public:
    Lek( int x,vrstaLeka y)
    {
        doza=x;
        s=y;
    }
    friend ostream&operator<<(ostream&izlaz,const Lek& l)
    {
        izlaz<<"doza"<<l.doza<<endl;
        izlaz<<"vrsta leka"<<l.s<<endl;
        return izlaz;
    }


};



#endif // LEK_HPP_INCLUDED
