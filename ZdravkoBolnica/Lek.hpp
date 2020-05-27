#ifndef LEK_HPP_INCLUDED
#define LEK_HPP_INCLUDED

enum vrstaLeka{tableta=1,kapi,sirup,kapsula,vakcina};

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
    string vrstal()const
    {
        string g;
        switch(s)
        {
            case 1:g="tableta";
            break;
            case 2:g="kapi";
            break;
            case 3:g="sirup";
            break;
            case 4:g="kapsula";
            break;
            case 5:g="vakcina";
            break;

        }
        return g;
    }
    friend ostream&operator<<(ostream&izlaz,const Lek& l)
    {
        izlaz<<"doza "<<l.doza<<endl;
        izlaz<<"vrsta leka "<<l.vrstal()<<endl;
        return izlaz;
    }


};



#endif // LEK_HPP_INCLUDED
