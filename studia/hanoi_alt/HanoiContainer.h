#ifndef HANOICONTAINER_H
#define HANOICONTAINER_H

#include <iostream>
#include <stdexcept>

template <typename T>
class HanoiContainer {
private:
    struct Node {
        T data;
        Node* next;

        Node(T value) : data(value), next(nullptr) {}
    };

    Node* topNode; // Wskaznik na szczyt
    int size;      // Rozmiar stosu

    void displayRecursive(Node* node) const {
        if (node == nullptr) {
            return;
        }
        displayRecursive(node->next);
        std::cout << node->data << " ";
    }

public:
    HanoiContainer() : topNode(nullptr), size(0) {}

    void push(const T& value) {
        Node* newNode = new Node(value);
        newNode->next = topNode;
        topNode = newNode;
        size++;
    }

    // Usuwa element z gory
    void pop() {
        if (empty()) {
            std::cerr << "Stos jest pusty!" << std::endl;
            return;
        }
        Node* temp = topNode;
        topNode = topNode->next;
        delete temp;
        size--;
    }

    // Zwraca element na szczycie stosu
    T& top() {
        if (empty()) {
            throw std::out_of_range("Stos jest pusty!");
        }
        return topNode->data;
    }


    bool empty() const {
        return topNode == nullptr;
    }


    int getSize() const {
        return size;
    }

    // Wyswietla stos
    void display() const {
        displayRecursive(topNode);
        std::cout << std::endl;
    }

    // Porownywanie wiez
    bool operator==(const HanoiContainer<T>& other) const {
        if (size != other.size) return false;

        Node* current1 = topNode;
        Node* current2 = other.topNode;
        while (current1 != nullptr && current2 != nullptr) {
            if (current1->data != current2->data) {
                return false;
            }
            current1 = current1->next;
            current2 = current2->next;
        }
        return true;
    }


    ~HanoiContainer() {
        while (!empty()) {
            pop();
        }
    }
};

#endif // HANOICONTAINER_H
