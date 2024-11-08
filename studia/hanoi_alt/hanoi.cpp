#include <iostream>
#include "HanoiContainer.h"

void drukarka(HanoiContainer<int>& tower1, HanoiContainer<int>& tower2, HanoiContainer<int>& tower3) {
    std::cout << "\nWieza 1: ";
    tower1.display();
    std::cout << "Wieza 2: ";
    tower2.display();
    std::cout << "Wieza 3: ";
    tower3.display();
}

void mover(int destination, int column, HanoiContainer<int>& tower1, HanoiContainer<int>& tower2, HanoiContainer<int>& tower3) {
    HanoiContainer<int>* from = (column == 1) ? &tower1 : (column == 2) ? &tower2 : &tower3;
    HanoiContainer<int>* to = (destination == 1) ? &tower1 : (destination == 2) ? &tower2 : &tower3;

    if (from->empty()) {
        std::cout << "Wieza jest pusta!" << std::endl;
        return;
    }

    // Przenoszenie dysków
    int topDisk = from->top();
    if (to->empty() || topDisk < to->top()) {
        to->push(topDisk);
        from->pop();
    } else {
        std::cout << "Nieprawidlowe dzialanie: Nie mozna polozyc wiekszego dysku na mniejszy." << std::endl;
    }
}

bool win(HanoiContainer<int>& tower1, HanoiContainer<int>& tower2, HanoiContainer<int>& tower3, const HanoiContainer<int>& win) {
    return tower3 == win;
}

int main() {
    HanoiContainer<int> tower1;
    HanoiContainer<int> tower2;
    HanoiContainer<int> tower3;

    // Stan początkowy
    tower1.push(3);
    tower1.push(2);
    tower1.push(1);

    HanoiContainer<int> winState;
    winState.push(3);
    winState.push(2);
    winState.push(1);

    std::cout << "Twoim zadaniem jest przeniesc elementy z wierzy 1 na 3, tak zeby najwiekszy dysk byl na dole a najmniejszy na gorze" << std::endl;

    int column = 0;
    int destination = 0;

    while (true) {
        drukarka(tower1, tower2, tower3);

        std::cout << "Wybierz kolumne, z ktorej chcesz przestawic: ";
        std::cin >> column;
        std::cout << "Wybierz kolumne, do ktorej chcesz przestawic: ";
        std::cin >> destination;

        mover(destination, column, tower1, tower2, tower3);

        if (win(tower1, tower2, tower3, winState)) {
            std::cout << "Gratulacje - wygrales!" << std::endl;
            break;
        }
    }

    return 0;
}
