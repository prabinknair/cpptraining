#include <iostream>
#include "triangle.h"
using namespace std;

void test(Triangle t, const char * prefix="Test Triangle"){
    show(t,prefix);
    cout<<"area ="<<area(t)<<endl
        <<"perimeter="<<perimeter(t)<<endl<<endl;
}

int main(int argc, char const *argv[])
{
    cout<<"sizeof(Triangle)="<<sizeof(Triangle)<<endl;

    Triangle t1={3,4,5};
    test(t1,"t1");

    Triangle t2={1,1,1};
    test(t2,"t2");

    Triangle* t3=create(10,3,20);
    if(t3==nullptr){
        cout<<"error creating triangle\n";
    }else {
        test(*t3);
    }
    Triangle* t4=create(10,3,12);
    if(t4==nullptr){
        cout<<"error creating triangle\n";
    }else {
        test(*t4);
    }
    Triangle t5=createtriangle(12,20,30);
    test(t5);

    return 0;
}