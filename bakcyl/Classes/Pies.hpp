#pragma once
#include <string>

enum class Rasa 
{
    Jamnik,
    Husky,
    Baset,
    GoldenRetriver
};

class Pies 
{
    public:
        Pies();
        explicit Pies(Rasa r, std::string i, int w = 40);
            

    int getWysokosc();
    
    private:
        Rasa rasa;
        int wysokosc;
        std::string imiePieska;
        const int iloscLap{ 4 };
};