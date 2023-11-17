
#include <iostream>

double power(double x, int n)
{
    double result {1.0};
    if (n>= 0 )
    {
        for (int i {1}; i <=n ; ++i)
            result *=x;
    }
    else 
    {
        for (int i {1}; i <= -n ; ++i)
            result /=x;
    }
    return result;
}
int main()
{
    // calculate poe=wers of 8 from -3 to 3
   for ( int i {-3}; i <=3 ; ++i)
   {
        std::cout << " " << power(8.0 , i) << std::endl;
   }
    std::cout << "" << std::endl;
}  