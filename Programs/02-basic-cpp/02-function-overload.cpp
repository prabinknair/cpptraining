#include<iostream>

void show(int value)
{
    std::cout<<"int: "<<value<<std::endl;
}
void show(const char* value)
{
    std::cout<<"String: "<<value<<std::endl;
}
void show(int size, int *array)
{
    std::cout<<"Numbers: ";
    for (int i=0; i<size; i++) {
        std::cout<<array[i]<<"\t";
    }
    std::cout<<std::endl;
}
int main()
{
    std::cout <<"Method overload test\n";
    show (123);
    show ("overload char");
    int array[] = {9,8,7,6,5,4,3,2,1};
    show (4, array);
    return 0;
}