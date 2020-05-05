#include <iostream>
using namespace std;

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

int main()
{
    Pacijent p(32,musko1,Dijabetes,21,Zarazna,kapsula);
    p.citanje();
    return 0;
}

 //    Predlog funkcionalnosti: Ispis trenutnog stanja u bolnici sa brojem slobodnih i zauzetih
 //    kreveta u prostorijama, brojem pacijentata i lekara, informacije o pacijentima iz neke
 //    prostorije sa njihovim dijagnozama, informacije o Lekarima u bolnici i njihove specijalizacije
 //    i pacijenti kojima pomazu, Lekovi koji su dostupni, broj medicinskih sestara i cistacica koje
 //    rade u bolnici ili u prostoriji i informacije o njima.
