#include <iostream>
#include <memory>
#include <string>

#include "Pies.hpp"



int main()
{
    Pies piesek;
    piesek.getWysokosc();

    std::unique_ptr<Pies> mojPiesek = std::make_unique<Pies>();
    std::cout << mojPiesek->getWysokosc() << std::endl;

    Pies azor(Rasa::Husky, " Azor");

    Pies* p = new Pies;
    p->getWysokosc();

    
    return 0;
}