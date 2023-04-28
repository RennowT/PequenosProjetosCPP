#pragma once

/* ================================= Bibliotecas =============================== */
// Bibliotecas
#include <cmath>

/* =================================== Classe ================================= */

class Calculadora
{
private:
    /* data */
public:
    Calculadora();
    ~Calculadora();
    double Calculando(double x, char operador, double y);
};

Calculadora::Calculadora()
{
}

Calculadora::~Calculadora()
{
}

double Calculadora::Calculando(double x, char operador, double y)
{
    switch (operador)
    {
    case '+':
        return x + y;
        break;

    case '-':
        return x - y;
        break;

    case '*':
        return x * y;
        break;

    case '/':
        return x / y;
        break;

    case '^':
        return pow(x, y);
    
    default:
        return 0.0;
        break;
    }
}