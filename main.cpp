#include <iostream>
using namespace std;
#include "Figura.h"
#include "Cuadrado.h"
#include "Circulo.h"
#include "Rectangulo.h"

int main ()
{
    Cuadrado s;
    s(5);
    s.setPerimetro(calcularPerimetro(b));
    cout << s.getPerimetro() << endl;

    Rectangulo r;
    r(5,10);
    r.setPerimetro(calcularPerimetro(b,h));
    cout << r.getPerimetro() << endl;
    
    Circulo t;
    t(5);
    t.setPerimetro(calcularPerimetro(b));
    cout << t.getPerimetro() << endl;''

return 0;
}
