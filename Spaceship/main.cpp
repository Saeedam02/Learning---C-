// Ex2_07.cpp - The width, alignment, fill, and 0 formatting options of std::println()
#include <iostream>
#include <compare>

int main()
{
    std::cout << "please enter a number" << std::endl;
    int value;
    std::cin >> value;
    std::strong_ordering ordering{ value <=> 0};

    std::cout << "value < 0 :" << (ordering == std::strong_ordering::less) << std::endl;
    std::cout << "value > 0 :" << (ordering == std::strong_ordering::greater) << std::endl;
    std::cout << "value = 0 :" << (ordering == std::strong_ordering::equal) << std::endl;


} 