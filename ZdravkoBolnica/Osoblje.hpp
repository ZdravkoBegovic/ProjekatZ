#ifndef OSOBLJE_HPP_INCLUDED
#define OSOBLJE_HPP_INCLUDED
enum pol {musko,zensko};
class Osoblje
{
protected:
string ime,prezime;
int starost;
pol c;
int godineRadnogIskustva;
static int brojosoblja;
public:
    Osoblje(int x,pol o,int n,string h,string j)
    {
        ime=h;
        prezime=j;
        starost=x;
        c=o;
        godineRadnogIskustva=n;
        brojosoblja++;
    }
    ~Osoblje()
    {
        brojosoblja--;
    }
    int getbr()const
    {
        return brojosoblja;
    }
};



#endif // OSOBLJE_HPP_INCLUDED


