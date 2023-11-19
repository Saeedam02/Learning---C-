
#include <iostream>
#include <string>

// Declaration for TemplateTypeParametersByReference:
// template <typename T> const T& maximum(const T& a, const T& b); //

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

  // eample for TemplateTypeParametersByReference:
  //   auto result = maximum(a, b);
  //   std::cout << "Out - &a: " << &a << std::endl;  // 0x111abc
}

template <typename T>
T maximum(T a, T b) {
  return (a > b) ? a : b;
}

// Definition for TemplateTypeParametersByReference:

// template <typename T> const T& maximum(const T& a, const T& b){
//     std::cout << "In - &a: " << &a << std::endl; // // 0x111abc
//     return (a > b ) ? a : b ;
// }
