//Jakub Majer
#include <iostream>



int main(){

    int a,b,c =0;
    int n =0;

    std::cout <<"a: ";
    std::cin >> a;
    n++;
    std::cout <<"b: ";
    std::cin >> b;
    n++;
    std::cout <<"c: ";
    std::cin >> c;
    n++;

    int srednia;
    srednia = (a+b+c)/n;

    if(srednia > 5)
        std::cout <<"Wysoka srednia" <<std::endl;

    
    std::cout <<"Srednia: " << srednia << std::endl;
    std::cout << "Suma: " << a+b+c <<std::endl;

    return 0;



    return 0;
}