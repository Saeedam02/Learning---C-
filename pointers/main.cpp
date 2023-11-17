
#include <iostream>

int main()
{
    // Stack memory
    int number {5};
    int* p_num {&number};
    std::cout << "Address of number is: " << p_num << std::endl;

    // Dynamic allocation and initialization ( Heap memory )
    int* p_num1{new int}; // memory location contains junk value ( never do this)
    int* p_num2{new int (22)}; // useing direct initialization 
    int* p_num3{new int {23}}; // using uniform initialization

    std::cout << std::endl;
    std::cout << "p_num1: " << p_num1 << std::endl;
    std::cout << "*p_num1: " << *p_num1 << std::endl; // junk value

    std::cout << "p_num2: " << p_num2 << std::endl;
    std::cout << "*p_num2: " << *p_num2 << std::endl;

    std::cout << "p_num3: " << p_num3 << std::endl;
    std::cout << "*p_num3: " << *p_num3 << std::endl;

    // Release the memory and Reset the pointers
    delete p_num1;
    p_num1 = nullptr;

    delete p_num2;
    p_num2 = nullptr;

    delete p_num3;
    p_num3 = nullptr;

    // Callling delete twice on a pointer: very BAD !!
    // delete p_num3
    // delete p_num3
    // our code will crush
}