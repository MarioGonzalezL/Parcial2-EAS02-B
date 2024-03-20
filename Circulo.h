#ifndef Circulo_h
#define Circulo_h
#include <iostream>
using namespace std;
#include "Figura.h"

class Circulo: public Figura
{
    Circulo(): Figura (){};
    Circulo(int b):  Figura(b,0){
        setPerimetro(calcularPerimetro(b));
    };
    float Circulo::calcularPerimetro (int b);
};
    #endif Circulo_h