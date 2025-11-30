#ifndef LINKS_IN_A_CHAIN_NODE_H
#define LINKS_IN_A_CHAIN_NODE_H

#endif //LINKS_IN_A_CHAIN_NODE_H
#include <iostream>

class Node {
    Link* data;
    Node *nextNode;
    public:
    Node(Link* node) :
        data(node),
        nextNode(nullptr)
    {}
    Node(Link* node2, Node* node1) : data(node2), nextNode(nullptr) {
        if (node1 != nullptr) {
            node1->nextNode = this;
        }
    }
    Node& next() {
        return *nextNode;
    }
    std::string getData() {
        return (data->get_material());
    }
};