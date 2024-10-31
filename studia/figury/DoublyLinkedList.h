#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include <iostream>
#include <string>

// Struktura figura
struct figura {
    std::string nazwa;
    double pole;
    double obwod;
};

// Wezel listy
struct Node {
    figura data;
    Node* next;
    Node* prev;

    Node(const figura& value) : data(value), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList();
    void append(const figura& value);
    void removeAt(int position);
    bool empty() const;
    int size() const;
    void display() const;
    ~DoublyLinkedList();
};

#endif
