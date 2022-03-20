//Source.cpp

#include "Vector3D.hpp"
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

int main (){
    Vector3D a;
    a.Init(1.5, 10, 5);
    a.Display();
    cout << endl;
    Vector3D b;
    b.Read();
    b.Display();
    cout << endl;
    Vector3D c;
    c = Vector3D::Add(a, b);
    c.Display();
    c = Vector3D::Sub(a, b);
    c.Display();
    c = Vector3D::Prod(a, b);
    cout << c.toString();
    
    return 0;
}
