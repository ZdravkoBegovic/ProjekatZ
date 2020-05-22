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


 Prostorija P(5,2,5,zauzet,veliki);


     Pacijent p(32,musko1,Dijabetes,21,Zarazna,kapsula,"Marko","J"),p2(40,zensko1,Dijabetes,22,Zarazna,kapsula,"Milica","C"),p3(32,zensko1,Dijabetes,312,Zarazna,kapsula,"Darija","M");
     //ideufajl();
     Osoblje O(12,musko,3,"M","J");
   //  O.dodaj1()
     Lekar L(Hirurgija,uskaSpecijalizacija,12,musko,3,"M","J");
     Bolnica B(3,5,7,zauzet,veliki);

     Cistacica C(2,4,musko,12,"Mihail","Bajev");
     //cout<<Pacijent::getbroj1;

    // cout<<Pacijent::getbroj1;

    // cout<<Pacijent::getbroj1;
     Osoblje A (2,musko,12,"Mihail","Bajev");
     B.primi1(&O);
     B.primi1(&A);
     B.primi1(&L);
     B.primi1(&C);
     B.primi(p);
     B.primi(p2);
     B.primi(p3);
     B.upisi();
     B.upisi1();
    return 0;
}

 ///    Predlog funkcionalnosti: Ispis trenutnog stanja u bolnici sa brojem slobodnih i zauzetih
 ///    kreveta u prostorijama, brojem pacijentata i lekara, informacije o pacijentima iz neke
 ///    prostorije sa njihovim dijagnozama, informacije o Lekarima u bolnici i njihove specijalizacije
 ///    i pacijenti kojima pomazu, Lekovi koji su dostupni, broj medicinskih sestara i cistacica koje
///     rade u bolnici ili u prostoriji i informacije o njima.
