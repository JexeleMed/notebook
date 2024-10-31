#include "DoublyLinkedList.h"

Node::Node(int value) : data(value), next(nullptr), prev(nullptr) {}

DoublyLinkedList::DoublyLinkedList() : head(nullptr), tail(nullptr) {}

void DoublyLinkedList::append(int value) {
    Node* newNode = new Node(value);
    if (!head) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void DoublyLinkedList::removeLast() {
    if (!tail) return;

    if (head == tail) {
        delete head;
        head = tail = nullptr;
    } else {
        Node* temp = tail;
        tail = tail->prev;
        tail->next = nullptr;
        delete temp;
    }
}

void DoublyLinkedList::displayForward() {
    Node* current = head;
    while (current) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

void DoublyLinkedList::displayBackward() {
    Node* current = tail;
    while (current) {
        std::cout << current->data << " ";
        current = current->prev;
    }
    std::cout << std::endl;
}

void DoublyLinkedList::remove(int value) {
    if (!head) return;

    Node* current = head;

    while (current && current->data != value) {
        current = current->next;
    }

    if (!current) return;

    if (head == tail && current == head) {
        delete head;
        head = tail = nullptr;
        return;
    }

    if (current == head) {
        head = head->next;
        head->prev = nullptr;
        delete current;
        return;
    }

    if (current == tail) {
        tail = tail->prev;
        tail->next = nullptr;
        delete current;
        return;
    }

    current->prev->next = current->next;
    current->next->prev = current->prev;
    delete current;
}

void DoublyLinkedList::removeAt(int position) {
    if (!head || position < 0) return;

    Node* current = head;
    int index = 0;

    while (current && index < position) {
        current = current->next;
        index++;
    }

    if (!current) return;

    if (head == tail && current == head) {
        delete head;
        head = tail = nullptr;
        return;
    }

    if (current == head) {
        head = head->next;
        head->prev = nullptr;
        delete current;
        return;
    }

    if (current == tail) {
        tail = tail->prev;
        tail->next = nullptr;
        delete current;
        return;
    }

    current->prev->next = current->next;
    current->next->prev = current->prev;
    delete current;
}

DoublyLinkedList::~DoublyLinkedList() {
    Node* current = head;
    while (current) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
}
