#include <iostream>
#include <cstdlib>

using namespace std;

int entradaInteiro();
bool jogoTerminou(int tentativas, bool acertou);

int main()
{
    int seletor;
    int tentativas;
    int numeroAleatorio = 42;
    bool acertou = false;

    system("clear || cls");

    cout << "       **************************************************\n";
    cout << "       **************** Jogo Da Advinhação **************\n";
    cout << "       **************************************************\n\n";

    cout << "       Selecione a Dificuldade: Facil [1]  Normal [2]  Difícil [3]\n\n";

    do
    {
        seletor = entradaInteiro();
    }while(seletor < 1 || seletor > 3);
    
    switch (seletor)
    {
    case 1:
        tentativas = 15;
        break;

    case 2:
        tentativas = 10;
        break;

    case 3:
        tentativas = 5;
        break;
    
    default:
        break;
    }

    system("clear || cls");

    cout << "       Digite um número de 1 a 100:\n";

    do
    {
        do
        {
            seletor = entradaInteiro();
        } while (seletor < 1 || seletor > 100);

        if(seletor == numeroAleatorio)
            acertou = true;
        else 
        {
            if(seletor > numeroAleatorio)
                cout << "       O número chutado é MAIOR do que o sorteado\n";
            if(seletor < numeroAleatorio)
                cout << "       O número chutado é MENOR do que o sorteado\n";

            tentativas--;
        }

    } while(!jogoTerminou(tentativas, acertou));

    system("clear || cls");
    
    return 0;
}

int entradaInteiro()
{
    int seletor;

    cout << ">>> ";
    cin >> seletor;
    cout << "\n";

    return seletor;
}

bool jogoTerminou(int tentativas, bool acertou)
{
    if(tentativas == 0 || acertou == true)
        return true;
    else
        return false;
}