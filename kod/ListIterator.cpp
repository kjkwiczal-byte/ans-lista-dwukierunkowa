#include "ListIterator.h"

ListIterator::ListIterator(Node* startNode) {
    this->current = startNode;
}

void ListIterator::next() {
    if (current != nullptr) {
        current = current->next;
    }
}

void ListIterator::prev() {
    if (current != nullptr) {
        current = current->prev;
    }
}

void ListIterator::printCurrent() {
    if (current != nullptr) {
        std::cout << "Aktualny element: " << current->data << std::endl;
    } else {
        std::cout << "Iterator wskazuje na pusty element (nullptr)." << std::endl;
    }
}

bool ListIterator::isValid() {
    return current != nullptr;
}