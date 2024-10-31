#include "Pies.hpp"
#include <iostream>



Pies::Pies()
    : rasa(Rasa::GoldenRetriver)
    , wysokosc(40)
    , imiePieska("Fafik")
{
    std::cout <<"Urodzil sie maly piesek" << std::endl;
}

Pies::Pies(Rasa r, std::string i, int w = 40)
    : rasa(r)
    , wysokosc(w)
    , imiePieska(i)
{
    std::cout<< "Urodzil sie maly piesek z atrybutami nie domyslnymi" << std::endl;
}
    
    int Pies::getWysokosc()
{
    rasa = Rasa::Husky;
    return wysokosc;
}