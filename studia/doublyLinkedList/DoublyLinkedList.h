#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include <iostream>

struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int value);
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList();
    void append(int value);
    void removeLast();
    void displayForward();
    void displayBackward();
    void remove(int value);
    void removeAt(int position);
    ~DoublyLinkedList();
};

#endif
