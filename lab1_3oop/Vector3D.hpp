//Vector3D.hpp

#pragma once
#include <string>

using namespace std;

class Vector3D{
private:
    double x, y, z, prod;
public:
    void SetX (double x1){ x = x1; }
    void SetY (double y1){ y = y1; }
    void SetZ (double z1){ z = z1; }
    double GetX (){ return x; }
    double GetY (){ return y; }
    double GetZ (){ return z; }
    double GetProd(){ return prod; }
    void   Init(double x1, double y2, double z1);
    void Display();
    void Read ();
    string toString() const;
    
    static Vector3D Add(Vector3D a, Vector3D b);
    static Vector3D Sub(Vector3D a, Vector3D b);
    static Vector3D Prod(Vector3D a, Vector3D b);
};
