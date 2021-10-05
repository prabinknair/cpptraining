#include <stdio.h>
#include <iostream>

int main ()
{
    printf("Time to explore CPP\n");
    std::cout << "Hello World" << " CPP\n";
    int x=20;
    double y=3;
    std::cout << x
             << " / "
             << y
             << " = "
             << x/y
             << std::endl;
    return 0;
}