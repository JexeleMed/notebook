//Jakub Majer zadanie 2
#include <iostream>
#include <cmath>
#include <numbers>
#include <ctype.h>


double angletorad (float t) {
    return t*M_PI/180;
}


int main() {

    int select;
    float parametr1, parametr2, parametr3;



for(;;) {
    std::cout << "Co chcesz zrobic? " <<std::endl;
    std::cout << " 1. Pole kola" << std::endl;
    std::cout << " 2. Objetosc kuli" << std::endl;
    std::cout << " 3. Pitagoras" << std::endl;
    std::cout << " 4. Twierdzenie cosinusow" << std::endl;
    std::cout << " 5. Procent skladany" << std::endl;
    std::cout << " 6. Operacja f" << std::endl;
    std::cout << " 7. Zamknij program " << std::endl;
    std::cin >> select;
    switch (select) {
        case 1:
            std::cout << "Poda promien kola: ";
            std::cin >> parametr1;
            std::cout << "Pole wynosi: " << M_PI*pow(parametr1, 2) << std::endl;
            break;
        case 2:
            std::cout << "Podaj promien kuli: ";
            std::cin >> parametr1;
            std::cout << "Objetosc kuli wynosi: " << 4*M_PI*pow(parametr1, 3)/3 << std::endl;
            break;
        case 3:
            std::cout << "Podaj bok a: ";
            std::cin >> parametr1;
            std::cout<< std::endl << "Podaj bok b: ";
            std::cin >> parametr2;
            std::cout << std::endl << "Bok c ma dlugosc: " << std::sqrt(pow(parametr1, 2) + pow(parametr2, 2)) << std::endl;
            break;
        case 4:
            std::cout << "Podaj bok a: ";
            std::cin >> parametr1;
            std::cout<< std::endl << "Podaj bok b: ";
            std::cin >> parametr2;
            std::cout << std::endl << "Podaj kat w stopniach: ";
            std::cin >> parametr3;
            std::cout << "Bok c ma miare: " << std::sqrt(pow(parametr1, 2) + pow(parametr2, 2) - 2 * parametr1*parametr2 * cos(angletorad(parametr3))) << std::endl;
            break;
        case 5:
            std::cout << "Podaj a:  ";
            std::cin >> parametr1;
            std::cout << std::endl << "Podaj p:  ";
            std::cin >> parametr2;
            std::cout << std::endl << "Podaj n:  ";
            std::cin >> parametr3;
            std::cout << std::endl << "K wynosi: " << parametr1 * pow((1 + parametr2/100), parametr3) << std::endl;
            break;
        case 6:
            std::cout << "Podaj a:  ";
            std::cin >> parametr1;
            std::cout << std::endl << "Podaj b:  ";
            std::cin >> parametr2;
            std::cout << std::endl << "Podaj c:  ";
            std::cin >> parametr3;
            if(parametr2+parametr3 == 0)
                std::cout <<"Niepoprawna wartosc" <<std::endl;
            else {
                std::cout<< "Wynik: " << ((parametr1*parametr2)+(parametr1*parametr3))/(parametr2+parametr3) << std::endl;
            }
            break;
        case 7:
            std::cout << "Zamykam program";
            return 0;
        default:
            std::cout << "Akcja nierozpoznana" << std::endl;
            break;
    }
}

    return 0;
}
