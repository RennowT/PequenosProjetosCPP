#include <iostream>

using namespace std;

int main()
{
    int seletor;

    cout << "       **************************************************\n";
    cout << "       **************** Jogo Da Advinhação **************\n";
    cout << "       **************************************************\n\n";

    cout << "       Selecione a Dificuldade: Facil [1]  Normal [2]  Difícil [3]\n\n";

    do
    {
        cout << ">>> ";
        cin >> seletor;
        cout << "\n";
    }while(seletor < 1 || seletor > 3);
    



    return 0;
}