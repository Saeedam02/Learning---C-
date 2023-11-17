
#include <iostream>

// Function prototype
double average(double array[], std::size_t count);

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
    double values[] {1.0,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0};
    std::cout <<"Average = "<< average(values , std::size(values));
}

double average(double array[], std::size_t count)
{
    double sum {};
    for(std::size_t i {}; i< count ; ++i)
        sum += array[i];
    return sum/count ;
}