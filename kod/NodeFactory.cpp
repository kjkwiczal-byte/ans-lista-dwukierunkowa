#include "NodeFactory.h"

Node* NodeFactory::createNode(int data) {
    return new Node(data);
}