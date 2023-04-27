#pragma once

/* =================================== Classe ================================= */

class Calculadora
{
private:
    /* data */
public:
    Calculadora(double x, char operador, double y);
    ~Calculadora();
    double Calculando(double x, char operador, double y);
};

Calculadora::Calculadora(double x, char operador, double)
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
        if(y == 0)
            return 0.0;
        return x / y;
        break;
    
    default:
        return 0.0;
        break;
    }
}