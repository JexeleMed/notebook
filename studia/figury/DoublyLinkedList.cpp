#include "DoublyLinkedList.h"

DoublyLinkedList::DoublyLinkedList() : head(nullptr), tail(nullptr) {}

void DoublyLinkedList::append(const figura& value) {
    Node* newNode = new Node(value);
    if (!head) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
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

bool DoublyLinkedList::empty() const {
    return head == nullptr;
}

int DoublyLinkedList::size() const {
    int count = 0;
    Node* current = head;
    while (current) {
        count++;
        current = current->next;
    }
    return count;
}

void DoublyLinkedList::display() const {
    Node* current = head;
    int id = 1;
    while (current) {
        std::cout<< id <<". " << "Nazwa: " << current->data.nazwa
                  << ", Pole: " << current->data.pole
                  << ", Obwod: " << current->data.obwod << std::endl;
        current = current->next;
        id++;
    }
}

DoublyLinkedList::~DoublyLinkedList() {
    Node* current = head;
    while (current) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
}
