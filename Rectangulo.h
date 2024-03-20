#ifndef Cuadrado_h
#define Cuadrado_h
#include <iostream>
using namespace std;
#include "Figura.h"

class Rectangulo: public Figura
{
     Rectangulo(): Figura ();
     Rectangulo(int b, int h): Figura(int b, int h);
    float Rectangulo::calcularPerimetro (int b, int h);
};
#endif Cuadrado_h