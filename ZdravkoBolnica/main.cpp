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

     P.primi(p);
     //cout<<Pacijent::getbroj1;
     P.primi(p2);
    // cout<<Pacijent::getbroj1;
     P.primi(p3);
    // cout<<Pacijent::getbroj1;
     Osoblje A (2,musko,12,"Mihail","Bajev");
     O.dodaj(O);
     A.dodaj(A);
     O.ispisosoblja();

     P.upisi();
    return 0;
}

 ///    Predlog funkcionalnosti: Ispis trenutnog stanja u bolnici sa brojem slobodnih i zauzetih
 ///    kreveta u prostorijama, brojem pacijentata i lekara, informacije o pacijentima iz neke
 ///    prostorije sa njihovim dijagnozama, informacije o Lekarima u bolnici i njihove specijalizacije
 ///    i pacijenti kojima pomazu, Lekovi koji su dostupni, broj medicinskih sestara i cistacica koje
///     rade u bolnici ili u prostoriji i informacije o njima.
