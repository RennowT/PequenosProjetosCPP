/* ================================= Bibliotecas =============================== */
// Bibliotecas
#include <iostream>

// Headers

using namespace std;


/* =================================== Funções ================================= */

void limpaTerminal();


/* ================================= Função Main =============================== */

int main()
{
    limpaTerminal();

    cout << "\n\n       Calculadora\n\n";
    cout << "       Formato:  a+b  |  a-b  |  a*b  |  a/b\n\n";
    
    return 0;
}

// Limpa o terminal
void limpaTerminal()
{
    system("clear || cls");

    return;
}