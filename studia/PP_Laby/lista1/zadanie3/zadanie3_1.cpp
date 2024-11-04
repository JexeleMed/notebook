//Jakub Majer
#include <iostream>




int main(){

    float a,b,s = 0;
    std::cin >> a;
    std::cin >> b;

    if(a>b)
        std::cout << "Pierwsza liczba jest wieksza od drugiej" << std::endl;
    else if(a==b)
        std::cout << "Podane liczby sa rowne" <<std::endl;
    else
        std::cout <<"Druga liczba jest wieksza od pierwszej" << std::endl;
    
    s = a+b;

    std::cout << "Suma wprowadzonych zmiennych wynosi: " << s << std::endl;

    return 0;

}