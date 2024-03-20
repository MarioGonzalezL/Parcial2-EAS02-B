#ifndef Cuadrado_h
#define Cuadrado_h
#include <iostream>
using namespace std;
#include "Figura.h"

class Cuadrado: public Figura
{
     Cuadrado(): Figura (){};
     Cuadrado(int b, int h):  Figura(b,0){
        setPerimetro(calcularPerimetro(b));
     };
    float Cuadrado::calcularPerimetro (float b);
};
    #endif Cuadrado_h