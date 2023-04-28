/* ================================= Bibliotecas =============================== */
// Bibliotecas
#include <iostream>

// Headers
#include "../lib/Calculadora.hpp"

using namespace std;


/* =================================== Funções ================================= */

void limpaTerminal();
void mostraFuncoesPossiveis();
void mostraResultadoDoCalculo(double x, char operador, double y, double resultado);


/* ================================= Função Main =============================== */

int main()
{
    // Declaração de variáveis
    double x = 0.0;
    double y = 0.0;
    double resultado = 0.0;
    char operador = '+';
    Calculadora calculadora;

    limpaTerminal(); // Limpa o terminal

    mostraFuncoesPossiveis();

    // Entrada e processamento da função
    while(true) // Repete até fechar o programa
    {
        cout << ">>> ";
        cin >> x >> operador >> y;
        
        resultado = calculadora.Calculando(x, operador, y);

        mostraResultadoDoCalculo(x, operador, y, resultado);
    }    

    return 0;
}

// Limpa o terminal
void limpaTerminal()
{
    system("clear || cls");

    return;
}

void mostraFuncoesPossiveis()
{
    cout << "\n\n       Calculadora\n\n";
    cout << "       Formato:  x + y  |  x - y  |  x * y  |  x / y\n";
    cout << "                 x ^ y\n\n";

    return;
}

void mostraResultadoDoCalculo(double x, char operador, double y, double resultado)
{
    cout << "\n       " << x << " " << operador << " " << y << " = " << resultado << "\n\n";

    return;
}