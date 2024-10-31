//Jakub Majer
#include <iostream>
#include <cmath>


int main(){

    double a,b,c = 0;

    std::cout <<"ax^2 + bx + c" <<std::endl;
    std::cout <<"Wprowadz a: ";
    std::cin >> a;
    std::cout <<"Wprowadz b: ";
    std::cin >> b;
    std::cout <<"Wprowadz c: ";
    std::cin >> c;

    if(a==0){
        std::cout << "Funkcja nie jest funkcja kwadratowa";
        return 0;
    }
    
    float delta;

    delta = pow(b, 2) - 4*a*c;

    std::cout << "Wierzcholek: " << std::endl << "p: " << -b/(2*a) << std::endl << "q: " << -(delta)/(4*a) << std::endl;
    if(delta>0)
        std::cout << "Miejsca zerowe:" << std::endl << "x1 = " << (-b-sqrt(delta))/(2*a) << std::endl << "x2 = " << (-b+sqrt(delta))/(2*a) << std::endl;
    else if(delta ==0)
        std::cout << "Miejsce zerowe: " << std::endl << "x0 = " << -b/(2*a) << std::endl;
    else
        std::cout << "Nie ma rozwiazania, delta < 0" << std::endl;

    std::cout << "Punkt przeciecia z osia OY: (" << 0 << "," << c << ")";
    return 0; 
    
}