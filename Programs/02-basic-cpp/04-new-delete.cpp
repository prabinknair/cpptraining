#include<iostream>
using namespace std;

void swap (int &p, int &q)
{
    int t;
    t=p;
    p=q;
    q=t;
}
int main ()
{
    int x=20, y=30;
    int *p = &x;
    int &z=x;
    cout <<p<<endl;
    cout <<z<<endl;
    cout <<" Before swaped "<<x<<"\t"<<y<<endl;
    swap(x,y);
    cout <<"swaped "<<x<<"\t"<<y<<endl;
    return 0;
}