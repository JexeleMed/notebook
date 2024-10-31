#include "DoublyLinkedList.h"
#include <iostream>

int main() {
    DoublyLinkedList list;
    list.append(10);
    list.append(20);
    list.append(30);

    std::cout << "Lista od poczatku: ";
    list.displayForward();

    std::cout << "Lista od konca: ";
    list.displayBackward();

    list.removeAt(1);
    std::cout << "Lista po usunieciu elementu na pozycji 1: ";
    list.displayForward();

    return 0;
}
