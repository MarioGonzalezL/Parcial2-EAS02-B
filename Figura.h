#ifndef Figura_h
#define Figura_h
#include <iostream>
using namespace std;

class Figura{
private:
    int b, h;
    float p;

public:
    Figura();
    Figura(int b, int h);
    void Figura::setPerimetro(float a);
    float Figura::getPerimetro(float p);
};


#endif Figura_h
