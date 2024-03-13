#ifndef Circulo_h
#define Circulo_h
#include <iostream>
using namespace std;
#include "Figura.h"

class Circulo: public Figura
{
    void Circulo:: Circulo(): Figura ();
    void Circulo::Circulo(int b, int h):  Figura(int b, int h);
    void Circulo::  setPerimetro(float a):  setPerimetro( float a );
    float calcularPerimetro (float a);
};
    #endif Circulo_h