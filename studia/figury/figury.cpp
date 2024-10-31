#include <iostream>
#include <string>
#include "DoublyLinkedList.h"

int main() {
    DoublyLinkedList figury;

    figury.append({"Kwadrat", 25.0, 20.0});
    figury.append({"Prostokat", 55.0, 80.0});
    figury.append({"Trojkat", 44.0, 30.0});
    figury.append({"Kolo", 28.0, 20.0});

    int ref = 0;
    int choice = 0;

    for (;;) {
        std::cout << "Menu:" << std::endl;
        std::cout << "1 - Dodaj figure" << std::endl;
        std::cout << "2 - Usun figure " << std::endl;
        std::cout << "3 - Pokaz figury" << std::endl;
        std::cout << "4 - Zamknij" << std::endl;
        std::cin >> ref;

        switch (ref) {
            case 1: {
                std::string nazwa;
                double pole, obwod;
                std::cout << "Podaj nazwe: ";
                std::cin >> nazwa;
                std::cout << "Podaj pole: ";
                std::cin >> pole;
                std::cout << "Podaj obwod: ";
                std::cin >> obwod;
                if (obwod > 0 && pole > 0) {
                    figury.append({nazwa, pole, obwod});
                    std::cout << "Dodawanie powiodlo sie" << std::endl;
                } else {
                    std::cout << "Niepoprawne dane wejsciowe" << std::endl;
                }
                break;
            }

            case 2: {
                if (figury.empty())
                    std::cout << "Lista jest pusta" << std::endl;
                else {
                    figury.display();
                    std::cout << "Ktora figure chcesz usunac? " << std::endl;
                    std::cin >> choice;
                    if (choice > 0 && choice <= figury.size()) {
                        figury.removeAt(choice - 1);
                        std::cout << "Usuwanie zakonczone" << std::endl;
                    } else {
                        std::cout << "Niepoprawny numer" << std::endl;
                    }
                }
                break;
            }

            case 3: {
                if (figury.empty())
                    std::cout << "Lista jest pusta" << std::endl;
                else {
                    std::cout << "Lista figur: " << std::endl;
                    figury.display();
                }
                break;
            }

            case 4: {
                std::cout << "Exiting" << std::endl;
                return 0;
            }

            default: {
                std::cout << "Niepoprawne polecenie." << std::endl;
                break;
            }
        }
    }
}
