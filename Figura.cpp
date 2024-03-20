#include "Figura.h"
#include <iostream>
using namespace std;

Figura::Figura()
{
    this-> h= 0;
    this-> b= 0;
}
Figura::Figura(int b, int h)
{
    this-> h= h;
    this-> b= b;
}
void Figura::setPerimetro(float a)
{
    this->p= a;
}
float Figura::getPerimetro(float p)
{
    return p;
}
