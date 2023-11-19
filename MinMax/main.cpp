#include <iostream>

#include "comparision.h"

int main() {
  int x{5};

  int y{10};

  std::cout << "max x and y is: " << max(x, y) << std::endl;

  std::cout << "min x and y is: " << min(x, y) << std::endl;
}
