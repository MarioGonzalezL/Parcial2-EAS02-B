#ifndef Cuadrado_h
#define Cuadrado_h
#include <iostream>
using namespace std;
#include "Figura.h"

class Cuadrado: public Figura
{
    void Cuadrado:: Cuadrado(): Figura ();
    void Cuadrado::Cuadrado(int b, int h):  Figura(int b, int h);
    void Cuadrado::setPerimetro(float a):  setPerimetro( float a );
    float calcularPerimetro (float a);
};
    #endif Cuadrado_h