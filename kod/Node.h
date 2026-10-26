#ifndef NODE_H
#define NODE_H

/**
 * @class Node
 * @brief Klasa reprezentująca pojedynczy węzeł listy dwukierunkowej.
 */
class Node {
public:
    int data;       ///< Przechowywana wartość całkowita
    Node* prev;     ///< Wskaźnik na poprzedni element
    Node* next;     ///< Wskaźnik na następny element

    /**
     * @brief Konstruktor węzła
     * @param val Wartość do przechowania w węźle
     */
    Node(int val);
};

#endif