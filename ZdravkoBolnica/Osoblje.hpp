#ifndef OSOBLJE_HPP_INCLUDED
#define OSOBLJE_HPP_INCLUDED
enum pol {musko=1,zensko};
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

    string getIme()const
    {
        return ime;
    }
    string getPrezime()const
    {
        return prezime;
    }
    ~Osoblje()
    {
        brojosoblja--;
    }
    int getbr()const
    {
        return brojosoblja;
    }
    virtual void predstavi_se()
    {
        cout<<"ja sam"<<ime<<endl;
        cout<<"moje prezime je"<<prezime<<endl;
        cout<<c<<endl;
        cout<<godineRadnogIskustva<<endl;
    }
     string davidimopol()const
    {
        string S;
        switch(c)
        {
            case 1:S="musko";
                    break;
            case 2:S="zensko";
                    break;
        return S;
        }
    }
      friend ostream&operator<<(ostream&izlaz,const Osoblje& O)
    {
        izlaz<<"ime i prezime  "<<O.ime<<O.prezime<<endl;
        izlaz<<O.starost<<"Godina"<<endl;
        izlaz<<O.davidimopol()<<endl;
        izlaz<<O.godineRadnogIskustva<<endl;
        return izlaz;
    }

};



#endif // OSOBLJE_HPP_INCLUDED


