
#include <iostream>

// Our Functions Declaration( prototype)
int Max(int a, int b); 
int Min(int a, int b);

int main()
{
    int x {5};
    int y {10};
  
    std::cout << "max x and y is: " << Max(x,y) << std::endl;
    std::cout << "min x and y is: " << Min(x,y) << std::endl;
}

int Max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
 
}
int Min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
 
}