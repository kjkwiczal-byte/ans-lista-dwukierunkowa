#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H
#include "Node.h"
#include "ListIterator.h"

/**
 * @class DoublyLinkedList
 * @brief Główna klasa zarządzająca listą dwukierunkową.
 */
class DoublyLinkedList {
private:
    Node* head; ///< Wskaźnik na początek listy
    Node* tail; ///< Wskaźnik na koniec listy
    int size;   ///< Rozmiar listy

public:
    DoublyLinkedList();
    ~DoublyLinkedList();

    void push_front(int data);
    void push_back(int data);
    void insert_at(int index, int data);
    
    void pop_front();
    void pop_back();
    void remove_at(int index);
    
    void print();
    void print_reverse();
    void clear();
    int get_size();

    /**
     * @brief Zwraca iterator ustawiony na początek listy
     * @return Obiekt ListIterator
     */
    ListIterator getIterator();
};

#endif