#include <iostream>
using namespace std;
#include <vector>
#include <fstream>
#include "Bolest.hpp"
#include "Cistacica.hpp"
#include "Dijagnoza.hpp"
#include "Krevet.hpp"
#include "Lek.hpp"
#include "Lekar.hpp"
#include "MedicinskaSestra.hpp"
#include "Osoblje.hpp"
#include "Pacijent.hpp"
#include "Prostorija.hpp"
#include "Specijalizacija.hpp"
#include "Bolnica.hpp"
int Osoblje::brojosoblja=0;
int Pacijent::pacijenti=0;
void ideufajl()
{
    string s="ima",m="pacijenata";
    ofstream fajl;
    fajl.open ("Fajl.txt", ios_base::app);
    fajl<<s<<" "<<Pacijent::getbroj1<<" "<<m<<endl;

}

int main()
{
    int broj;
    Bolnica B(3,5,7,zauzet,veliki);
    Prostorija P(5,2,5,zauzet,veliki);
    do
    {
    cout<<"1 Primanje novog pacijenta "<<endl;
    cout<<"2 Primanje osoblja"<<endl;
    cout<<"3 Ispis pacijenta"<<endl;
    cout<<"4 Ispis osoblja"<<endl;
    cout<<"5 Otpustanje"<<endl;
    cout<<"6 Pretraga pacijenta"<<endl;
    cout<<"Unesite 0 za izlazak"<<endl;

    cin>>broj;
    switch(broj)
    {
    case 1:
    {
        int pom;
        cout<<"Koliko primljena osoba ima godina?"<<endl;
        int godine;
        cin>>godine;
        cout<<"Koji je pol osobe?"<<endl;
        poll pl;
        cout<<"musko"<<"1"<<endl;
        cout<<"zensko"<<"2"<<endl;
        cin>>pom;
        switch(pom)
        {
        case 1:
            pl=musko1;
            break;
        case 2:
            pl=zensko1;
            break;
        }
        cout<<"Koje je ime pacijenta?"<<endl;
        string ime,prezime;
        cin>>ime;
        cout<<"Koje je prezime pacijenta?"<<endl;
        cin>>prezime;
        cout<<"Kolika je doza leka?"<<endl;
        int doza;
        cin>>doza;
        cout<<"Od cega pacijent boluje?"<<endl;
        tipBolesti bol;
        cout<<"Dijabetes"<<"1"<<endl;
        cout<<"Bolest srca"<<"2"<<endl;
        cout<<"Kozna bolest"<<"3"<<endl;
        cin>>pom;
        switch(pom)
        {
        case 1:
        {
            bol=Dijabetes;
            break;
        }
        case 2:
        {
            bol=BolestSrca;
            break;
        }
        case 3:
        {
            bol=KoznaBolest;
            break;
        }
        }
        cout<<"Kakva je bolest?"<<endl;
        cout<<"1 zarazna"<<endl;
        cout<<"2 teska"<<endl;
        cout<<"3 laka"<<endl;
        cout<<"4 nezarazna"<<endl;
        podelaBolesti pod;
        cin>>pom;

        switch(pom)
        {
        case 1:
        {
            pod=Zarazna;
            break;
        }
        case 2:
        {
            pod=Teska;
            break;
        }
        case 3:
        {
            pod=Laka;
            break;
        }
        case 4:
        {
            pod=Nezarazna;
            break;
        }
        }
        vrstaLeka llek;
        cout<<"Koja je vrsta leka?"<<endl;
        cout<<"1 tableta"<<endl;
        cout<<"2 kapi"<<endl;
        cout<<"3 sirup"<<endl;
        cout<<"4 kapsula"<<endl;
        cout<<"5 vakcina"<<endl;
        cin>>pom;
        switch(pom)
        {
        case 1:
        {
            llek=tableta;
            break;
        }
        case 2:
        {
            llek=kapi;
            break;
        }
        case 3:
        {
            llek=sirup;
            break;
        }
        case 4:
        {
            llek=kapsula;
            break;
        }
        case 5:
        {
            llek=vakcina;
            break;
        }
        }
        Pacijent pac(godine,pl,bol,doza,pod,llek,ime,prezime);
        cout<<pac<<endl;
        P.primi(pac);
        P.upisi();
        }
        break;

    case 2:
    {
        cout<<"Koje je ime zaposlene osobe?"<<endl;
        string ime,prezime;
        cin>>ime;
        cout<<"Koje je prezime zaposlene osobe?"<<endl;
        cin>>prezime;
        int godine;
        cout<<"Koliko zaposlena osoba ima godina?"<<endl;
        cin>>godine;
        int rs;
        cout<<"Koliko zaposlena osoba ima godina radnog staza?"<<endl;
        cin>>rs;
        pol l;
        cout<<"musko"<<" 1"<<endl;
        cout<<"zensko"<<" 2"<<endl;
        int prom;
        cin>>prom;
        switch(prom)
        {
        case 1:
            l=musko;
            break;
        case 2:
            l=zensko;
            break;
        }
        Osoblje osoba(godine,l,rs,ime,prezime);
        cout<<osoba<<endl;
        B.primi1(&osoba);
        B.upisi1();
        break;
    }
        case 3:
            {
               P.listapacijenata();
               break;
            }
        case 4:
            {
               B.ispisosoblja();
               break;
            }
        case 5:
            {
                int a;
                cout<<"1 Pacijenta"<<endl;
                cout<<"2 Osoblja"<<endl;
                cin>>a;
                if(a==1)
                {
                cout<<"unesite ime pacijenta kog zelite da otpustite a zatim i njegovo prezime u zadata polja"<<endl;
                P.otpusti();
                }
                else
                {
                cout<<"unesite ime pacijenta kog zelite da otpustite a zatim i njegovo prezime u zadata polja"<<endl;
                B.otpusti1();
                }
                break;

            }
        case 6:
            {
              cout<<"unesite ime pacijenta kog zelite da pronadjete a zatim i njegovo prezime u zadata polja"<<endl;
              P.pretraga();
              break;
            }
    }

    }while(broj!=0);
    return 0;
}

///    Predlog funkcionalnosti: Ispis trenutnog stanja u bolnici sa brojem slobodnih i zauzetih
///    kreveta u prostorijama, brojem pacijentata i lekara, informacije o pacijentima iz neke
///    prostorije sa njihovim dijagnozama, informacije o Lekarima u bolnici i njihove specijalizacije
///    i pacijenti kojima pomazu, Lekovi koji su dostupni, broj medicinskih sestara i cistacica koje
///     rade u bolnici ili u prostoriji i informacije o njima.
