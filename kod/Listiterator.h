#ifndef LISTITERATOR_H
#define LISTITERATOR_H
#include "Node.h"
#include <iostream>

/**
 * @class ListIterator
 * @brief Klasa realizująca wzorzec projektowy Iterator.
 * Pozwala na poruszanie się po elementach listy dwukierunkowej bez odsłaniania jej wewnętrznej struktury.
 */
class ListIterator {
private:
    Node* current; ///< Wskaźnik na aktualnie przeglądany węzeł

public:
    /**
     * @brief Konstruktor iteratora
     * @param startNode Węzeł, od którego rozpoczynamy iterację
     */
    ListIterator(Node* startNode);

    /**
     * @brief Przesuwa iterator na następny element
     */
    void next();

    /**
     * @brief Przesuwa iterator na poprzedni element
     */
    void prev();

    /**
     * @brief Zwraca wartość aktualnego węzła i wypisuje ją na ekran
     */
    void printCurrent();

    /**
     * @brief Sprawdza, czy iterator doszedł do końca/początku (czy wskazuje na nullptr)
     * @return true jeśli wskazuje na poprawny obiekt, false jeśli na nullptr
     */
    bool isValid();
};

#endif