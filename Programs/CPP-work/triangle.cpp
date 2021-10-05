#include <iostream>
#include "triangle.h"
#include <math.h>
using namespace std;

Triangle* create(const double& x, const double& y, const double& z){
    if((x+y)<z||(x+z)<y||(y+z)<x) {
        return nullptr;
    }
    Triangle* newtriangle = new Triangle;
    newtriangle->s1=x;
    newtriangle->s2=y;
    newtriangle->s3=z;
}

int perimeter(const Triangle &t){
    //t.s1=0; //can modify the actual object
    return t.s1+t.s2+t.s3;
}

double area(const Triangle &t){
    double s= perimeter(t)/2.0;
    
    return sqrt(s*(s-t.s1)*(s-t.s2)*(s-t.s3));
}

void show(const Triangle &t, const char * prefix){
    cout<<prefix<<" : <"
                << t.s1<<","
                << t.s2<<","
                << t.s3 <<">\n";
}