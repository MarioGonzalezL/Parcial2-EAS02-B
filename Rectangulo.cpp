#include "Figura.h"
#include "Rectangulo.h"
#include <iostream>
using namespace std;

    float Rectangulo::calcularPerimetro (int b, int h)
    {
        return 2*(b+h);
    }