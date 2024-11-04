//Jakub Majer
#include <iostream>


int main(){

    int rep = 0;
    char asci;

    std::cout << "Podaj dlugosc boku" << std::endl;
    std::cin >> rep;
    std::cout << "Podaj znak wypelnienia" << std::endl;
    std::cin >> asci;
    std::cout << std::endl;



    for(int i=0; i<rep+1; i++){
        for (int j = 0; j < i; j++)
        {
            std::cout << asci;
        }
        std::cout << std::endl;
        
    }

    return 0;
}