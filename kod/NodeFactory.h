#ifndef NODEFACTORY_H
#define NODEFACTORY_H
#include "Node.h"

/**
 * @class NodeFactory
 * @brief Klasa realizująca wzorzec projektowy Factory (Fabryka).
 * Odpowiada za bezpieczne tworzenie nowych obiektów typu Node.
 */
class NodeFactory {
public:
    /**
     * @brief Metoda fabrykująca nowy węzeł.
     * @param data Wartość, która ma zostać przypisana do węzła.
     * @return Wskaźnik na nowo utworzony obiekt Node na stercie.
     */
    static Node* createNode(int data);
};

#endif