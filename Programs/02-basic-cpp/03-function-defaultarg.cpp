#include <iostream>
#include <math.h>

double power (double value, double exp=0.5);


int main()
{
    std::cout<<"Default Arg \n";
    std::cout<<power (2,3) <<std::endl
             <<power (16) << std::endl;
    return 0;
}
double power (double value, double exp)
{
    return pow(value, exp);
}
