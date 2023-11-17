
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

    // Dangling pointers
    // for multiple pointers to point to a same address, makr sure is one clear pointer that owns the memory
    // (responsible for releasing when necessary), other pointers should only be able to dereference when the master pointer is valid.
    
    int* p_num5 {new int{382}}; // let's say this is master pointer.
    int* p_num6 {p_num5};

    // dereference the pointers and use them
    std::cout << "p_num5: " << p_num5 << " - " << *p_num5 << std::endl;

    if(!(p_num5 == nullptr))
    { // only use slave pointer when the master is valid.
        std::cout << "p_num6: " << p_num6 << " - " << *p_num6 << std::endl;
    }

    delete p_num5;
    p_num5 = nullptr; // Master release the memory.

    if(!(p_num5 == nullptr))
    {// only use slave pointer when the master is valid.
        std::cout << "p_num6: " << p_num6 << " - " << *p_num6 << std::endl;
    }
    else
    {
        std::cerr << " Warnning : Trying to use an invalid pointer" << std::endl;
    }
}