#ifndef PROSTORIJA_HPP_INCLUDED
#define PROSTORIJA_HPP_INCLUDED
class Prostorija
{
private:
int brojKreveta;
int brojSlobodnihKreveta;
int brojZauzetihKreveta;
public:
    Prostorija( int w, int n, int l)
    {
     brojKreveta=w;
     brojSlobodnihKreveta=n;
     brojZauzetihKreveta=l;
    }


};


#endif // PROSTORIJA_HPP_INCLUDED
