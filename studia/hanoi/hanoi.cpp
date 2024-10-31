// Jakub Majer
#include <iostream>
#include <vector>


void drukarka(std::vector<int> tower1, std::vector<int> tower2, std::vector<int> tower3){
    std::cout << std::endl;
    std::cout << "Wieza 1: ";
    for (int disk : tower1) std::cout << disk << " ";
    std::cout << "\nWieza 2: ";
    for (int disk : tower2) std::cout << disk << " ";
    std::cout << "\nWieza 3: ";
    for (int disk : tower3) std::cout << disk << " ";
    std::cout << std::endl;
}

// Ochrona przeciw niewlasciwym inputem
bool inputchecker(int destination, int column){
    if(destination > 3 || destination < 1 || column > 3 || column < 1){
            return 0;
        }
    else
        return 1;
}

void mover(int destination, int column, std::vector<int>& tower1, std::vector<int>& tower2, std::vector<int>& tower3 ){
    auto& from = (column == 1) ? tower1 : (column == 2) ? tower2 : tower3; 
    auto& to = (destination == 1) ? tower1 : (destination == 2) ? tower2 : tower3;
    //instrukcje pomijajace zagniezdzajace sie if statements
    //przyporzadkowuje zmiennym from i to wartosci na bazie inputu przekazanageo do funkcji

    // Sprawdza czy wieza zrodlowa nie jest pusta
    if (from.empty()) {
        std::cout << "Wieza jest pusta!" << std::endl;
        return;
    }

    // Przenoszenie
    if (to.empty() || from.back() < to.back()) {
        to.push_back(from.back());
        from.pop_back();
    } else {
        std::cout << "Nieprawidlowe dzialanie" << std::endl;
    }
}


bool winner(std::vector<int> tower1, std::vector<int> tower2, std::vector<int> tower3, std::vector<int> win){
    if(tower3 == win)
        return 1;
    else
        return 0;

}
int main(){
    // Stan poczatkowy
    std::vector<int> win = {3, 2, 1};
    std::vector<int> tower1 = {3, 2, 1};
    std::vector<int> tower2;
    std::vector<int> tower3;

    int column = 0;
    int destination = 0;
    std::cout << "Twoim zadaniem jest przeniesc elementy z wierzy 1 na 3, tak zeby najwiekszy dysk byl na dole a najmniejszy na gorze" << std::endl;
    
    for(;;){
        drukarka(tower1, tower2, tower3);

        std::cout<< "Wybierz kolumne, z ktorej chcesz przestawic?" << std::endl;
        std::cin >> column;
        std::cout<< "Wybierz kolumne, do ktorej chcesz przestawic?" << std::endl;
        std::cin >> destination;

        while (inputchecker(destination, column)==0)
        {
            std::cout << "Nieprawidlowe dane wejsciowe" << std::endl;
            std::cout<< "Wybierz kolumne, z ktorej chcesz przestawic?" << std::endl;
            std::cin >> column;
            std::cout<< "Wybierz kolumne, z ktorej chcesz przestawic?" << std::endl;
            std::cin >> destination;
        }
        

        mover(destination, column, tower1, tower2, tower3);


        if(winner(tower1, tower2, tower3, win) == 1){
            std::cout << "Gratulacje - wygrales!";
            return 0; 
        }
    }
}