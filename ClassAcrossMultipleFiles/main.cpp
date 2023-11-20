#include <iostream>

#include "cylinder.hpp"

int main() {
  Cylinder cylinder1(10, 10);
  std::cout << "volume : " << cylinder1.volume() << std::endl;

  return 0;
}