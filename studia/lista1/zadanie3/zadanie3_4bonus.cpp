//Jakub Majer 
#include <iostream>
#include <windows.h>

void drukarka(char znak, int bok, int kolor){

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); 
    
    SetConsoleTextAttribute(hConsole, kolor); 
    for(int i=0; i<bok+1; i++){
        for (int j = 0; j < i; j++)
        {
            std::cout << znak;
        }
        std::cout << std::endl;
        }      
    }

int main(){

    int rep = 0;
    char asci;
    int kolor = 0;
    std::cout << "Podaj dlugosc boku" << std::endl;
    std::cin >> rep;
    std::cout << "Podaj znak wypelnienia" << std::endl;
    std::cin >> asci;
    std::cout << "Podaj kolor (1 - czerwony, 2 - zielony, 3 - niebieski): " << std::endl;
    std::cin >> kolor;

    
    switch (kolor) {
        case 1:
            kolor = FOREGROUND_RED;
            break;
        case 2:
            kolor = FOREGROUND_GREEN;
            break;
        case 3:
            kolor = FOREGROUND_BLUE;
            break;
        default:
            kolor = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;  
            break;
    }
    std::cout << std::endl;


    drukarka(asci, rep, kolor);

    std::cout << "Koniec";
    return 0;
}