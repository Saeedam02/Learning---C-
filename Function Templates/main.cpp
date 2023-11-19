
#include <iostream>
#include <string>

template <typename T>
T maximum(T a, T b) {
  return (a > b) ? a : b;
}

int main() {
  int a{5};
  int b{6};

  double x{2.1};
  double y{5.6};

  std::string s{"Hello Word"};
  std::string d{"How are you doing? "};

  auto result1 = maximum(a, b);
  auto result2 = maximum(x, y);
  auto result3 = maximum(s, d);

  std::cout << "result1:" << result1 << std::endl;
  std::cout << "result2:" << result2 << std::endl;
  std::cout << "result3:" << result3 << std::endl;

  // Explicit template arguments

  auto max = maximum<double>(a, x);
  std::cout << "max : " << max << std::endl;
}
