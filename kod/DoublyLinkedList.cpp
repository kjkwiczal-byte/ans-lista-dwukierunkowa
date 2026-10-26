#include "DoublyLinkedList.h"
#include "NodeFactory.h"
#include <iostream>

DoublyLinkedList::DoublyLinkedList() {
    head = nullptr;
    tail = nullptr;
    size = 0;
}

DoublyLinkedList::~DoublyLinkedList() {
    clear();
}

void DoublyLinkedList::push_front(int data) {
    Node* newNode = NodeFactory::createNode(data);
    if (head == nullptr) {
        head = tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    size++;
}

void DoublyLinkedList::push_back(int data) {
    Node* newNode = NodeFactory::createNode(data);
    if (tail == nullptr) {
        head = tail = newNode;
    } else {
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
    size++;
}

void DoublyLinkedList::insert_at(int index, int data) {
    if (index <= 0) {
        push_front(data);
        return;
    }
    if (index >= size) {
        push_back(data);
        return;
    }
    
    Node* current = head;
    for (int i = 0; i < index; i++) {
        current = current->next;
    }
    
    Node* newNode = NodeFactory::createNode(data);
    newNode->next = current;
    newNode->prev = current->prev;
    current->prev->next = newNode;
    current->prev = newNode;
    size++;
}

void DoublyLinkedList::pop_front() {
    if (head == nullptr) return;
    Node* temp = head;
    if (head == tail) {
        head = tail = nullptr;
    } else {
        head = head->next;
        head->prev = nullptr;
    }
    delete temp;
    size--;
}

void DoublyLinkedList::pop_back() {
    if (tail == nullptr) return;
    Node* temp = tail;
    if (head == tail) {
        head = tail = nullptr;
    } else {
        tail = tail->prev;
        tail->next = nullptr;
    }
    delete temp;
    size--;
}

void DoublyLinkedList::remove_at(int index) {
    if (index < 0 || index >= size || head == nullptr) return;
    if (index == 0) {
        pop_front();
        return;
    }
    if (index == size - 1) {
        pop_back();
        return;
    }
    
    Node* current = head;
    for (int i = 0; i < index; i++) {
        current = current->next;
    }
    
    current->prev->next = current->next;
    current->next->prev = current->prev;
    delete current;
    size--;
}

void DoublyLinkedList::print() {
    Node* current = head;
    std::cout << "Lista (od poczatku): ";
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

void DoublyLinkedList::print_reverse() {
    Node* current = tail;
    std::cout << "Lista (od konca): ";
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->prev;
    }
    std::cout << std::endl;
}

void DoublyLinkedList::clear() {
    while (head != nullptr) {
        pop_front();
    }
}

ListIterator DoublyLinkedList::getIterator() {
    return ListIterator(head);
}
int DoublyLinkedList::get_size() {
    return size;
}