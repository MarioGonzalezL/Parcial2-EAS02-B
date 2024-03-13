#ifndef Cuadrado_h
#define Cuadrado_h
#include <iostream>
using namespace std;
#include "Figura.h"

class Rectangulo: public Figura
{
    void Rectangulo(): Figura ();
    void Rectangulo(int b, int h): Figura(int b, int h);
    void setPerimetro(float a): setPerimetro( float a );
    float calcularPerimetro (float a);
};
#endif Cuadrado_h