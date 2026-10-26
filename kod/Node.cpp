#include "Node.h"

Node::Node(int val) {
    this->data = val;
    this->prev = nullptr;
    this->next = nullptr;
}