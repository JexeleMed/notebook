//Jakub Majer
#include <iostream>
#include <string>


int toDecimal(const std::string& liczba, int baza) {
    int decimal = 0;


    for (int i = 0; i < liczba.length(); ++i) {
        char digit = liczba[i];
        int value;

        if (digit >= '0' && digit <= '9') {
            value = digit - '0'; // Cyfra na liczbe
        } else if (digit >= 'A' && digit <= 'Z') {
            value = digit - 'A' + 10; // Litera na liczbe
        } else if (digit >= 'a' && digit <= 'z') {
            value = digit - 'a' + 10;
        } else {
            throw std::invalid_argument("Nieprawidlowy znak w wejsciu");
        }

        // Sprawdź, czy wartość cyfry jest mniejsza niż podstawa
        if (value >= baza) {
            throw std::invalid_argument("Cyfra poza zakresem dla danej bazy");
        }

        // Przelicz na system dziesiętny
        decimal = decimal * baza + value;
    }

    return decimal;
}

// Konwersja z systemu decymalnego na docelowy
std::string conversion(int liczba, int podstawa) {
    std::string wynik;
    std::string cyfry = "0123456789ABCDEF"; // Lancuch obslugiwanych "cyfr", az do systemy szesnastkowego

    if (liczba == 0) {
    return "0";
    }

    while (liczba > 0) {
        wynik = cyfry[liczba % podstawa] + wynik;
        liczba /= podstawa;
    }

    return wynik;
}

int main() {

    std::string liczba;
    int baza = 0;
    int cel = 0;
    std::cout << "Podaj liczbe: ";
    std::cin >> liczba;
    std::cout << "Podaj system wprowadzonej liczby: ";
    std::cin >> baza;
    std::cout << "Podaj docelowy system: ";
    std::cin >> cel;

    if(cel < 2 || baza <2 || cel > 16 || baza >16) {
        std::cout << "Zakres wykracza poza zaimplementowane systemy liczbowe";
        return 0;
    }
    std::cout << conversion(toDecimal(liczba, baza), cel);

    return 0;
}

