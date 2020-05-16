#include <iostream>
using namespace std;
#include <vector>
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

int main()
{


  /*  Pacijent p(32,musko1,Dijabetes,21,Zarazna,kapsula);
    p.citanje();
    Prostorija P(5,2,5,zauzet,veliki);
    cout<<P;
    MedicinskaSestra M (Prva,3,musko,5,"sdas","dasdf");
    Krevet K(zauzet,veliki);
    cout<<K;
    Specijalizacija S(Hirurgija,sirokaSpecijalizacija);
    cout<< S;
    cout<< M.getbr();
  */ Prostorija P(5,2,5,zauzet,veliki);
     Pacijent p(32,musko1,Dijabetes,21,Zarazna,kapsula,"Marko","J"),p2(40,zensko1,Dijabetes,22,Zarazna,kapsula,"Milica","C"),p3(32,zensko1,Dijabetes,312,Zarazna,kapsula,"Darija","M");
     P.primi(p);
     P.primi(p2);
     P.primi(p3);
     P.listapacijenata();
     P.otpusti();
     P.listapacijenata();
     P.pretraga();
     P.listapacijenata();
     Osoblje A (2,musko,12,"Mihail","Bajev");
     MedicinskaSestra B (Druga,2,zensko,7,"Milica","D");
     A.predstavi_se();
     B.predstavi_se();

    return 0;
}

 //    Predlog funkcionalnosti: Ispis trenutnog stanja u bolnici sa brojem slobodnih i zauzetih
 //    kreveta u prostorijama, brojem pacijentata i lekara, informacije o pacijentima iz neke
 //    prostorije sa njihovim dijagnozama, informacije o Lekarima u bolnici i njihove specijalizacije
 //    i pacijenti kojima pomazu, Lekovi koji su dostupni, broj medicinskih sestara i cistacica koje
 //    rade u bolnici ili u prostoriji i informacije o njima.
