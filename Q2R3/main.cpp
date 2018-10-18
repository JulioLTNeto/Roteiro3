#include <iostream>

using namespace std;

#include "include/FiguraGeometrica.h"
#include "include/Circulo.h"
#include "include/Retangulo.h"
#include "include/Triangulo.h"

int main()
{
    FiguraGeometrica *fig[3];

    fig[0] = new Circulo(10);
    fig[1] = new Retangulo(10, 10);
    fig[2] = new Triangulo(10, 10);

    cout << "Area do circulo com raio 10: " << fig[0]->calcularArea() << endl;
    cout << "Area do retangulo com altura e largura 10: " << fig[1]->calcularArea() << endl;
    cout << "Area do triangulo com altura e largura 10: " << fig[2]->calcularArea() << endl;
    return 0;
}
