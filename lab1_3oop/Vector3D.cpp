//Vector3D.cpp

#include "Vector3D.hpp"
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

void Vector3D::Init(double x1, double y1, double z1){
    x = x1;
    y = y1;
    z = z1;
}

void Vector3D::Display(){
    cout << "Vector(" << x << ", " << y << ", " << z << ")" << endl;
}

void Vector3D::Read(){
    cout << "x = "; cin >> x; cout << endl;
    cout << "y = "; cin >> y; cout << endl;
    cout << "z = "; cin >> z; cout << endl;
}

string Vector3D::toString() const{
    stringstream sout;
    sout << "Prod = " << prod << endl;
    return sout.str();
}

Vector3D Vector3D::Add(Vector3D a, Vector3D b){
    Vector3D c;
    c.x = a.x + b.x;
    c.y = a.y + b.y;
    c.z = a.z + b.z;
    return c;
}

Vector3D Vector3D::Sub(Vector3D a, Vector3D b){
    Vector3D c;
    c.x = a.x - b.x;
    c.y = a.y - b.y;
    c.z = a.z - b.z;
    return c;
}

Vector3D Vector3D::Prod(Vector3D a, Vector3D b){
    Vector3D c;
    c.prod = a.x*b.x + a.y*b.y + a.z*b.z;
    return c;
}



