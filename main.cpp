#include <iostream>
#include "src/link.hpp"
#include "src/node.h"

int main() {
  Link gold = Link("Gold");
  Node* node_one = new Node(&gold);

  Link silver = Link("Silver");
  Node* node_two = new Node(&silver, node_one);
  std::cout << node_one->getData() << std::endl;
  Link bronze = Link("Bronze");
  Node* node_three = new Node(&bronze, node_two);

  Node retrieved_node_two = node_one->next();
  Node retrieved_node_three = node_two->next();
  std::cout << retrieved_node_two.getData() << std::endl;
  std::cout << retrieved_node_three.getData() << std::endl;



}
