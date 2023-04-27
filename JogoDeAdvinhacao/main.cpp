#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int entradaInteiro();
bool jogoTerminou(int tentativas, bool acertou);
void limpaTerminal();
void mostraCabecalho();
void mostraHub();
void escolheDificuldade(int seletor, int* tentativas, int* tentativasDificuldade);
void mostraRangeDeNumeros();
int geraNumeroAleatorio();
void mostraNumeroDeTentativas(int tentativas, int tentativasDificuldade);
bool acertouNumero(int seletor, int numeroAleatorio);
bool numeroMaior(int seletor, int numeroAleatorio);
bool numeroMenor(int seletor, int numeroAleatorio);
void mensagemNumeroMaior();
void mentagemNumeroMenor();
void mensagemVencedor();
void mensagemPerdedor();
void mensagemJogarNovamente();

int main()
{
    int seletor;
    int tentativas;
    int numeroAleatorio;
    bool acertou = false;
    int tentativasDificuldade;

    do
    {
        limpaTerminal();

        mostraCabecalho();
        mostraHub();

        do
        {
            seletor = entradaInteiro();
        }while(seletor < 1 || seletor > 3);
        
        escolheDificuldade(seletor, &tentativas, &tentativasDificuldade);

        limpaTerminal();

        numeroAleatorio = geraNumeroAleatorio();
        cout << numeroAleatorio;

        mostraRangeDeNumeros();

        do
        {
            mostraNumeroDeTentativas(tentativas, tentativasDificuldade);

            do
            {
                seletor = entradaInteiro();
            } while (seletor < 1 || seletor > 100);

            if(acertouNumero(seletor, numeroAleatorio))
                acertou = true;
            else 
            {
                if(numeroMaior(seletor, numeroAleatorio))
                    mensagemNumeroMaior();
                if(numeroMenor(seletor, numeroAleatorio))
                    mentagemNumeroMenor();

                tentativas--;
            }

        }while(!jogoTerminou(tentativas, acertou));

        limpaTerminal();

        if(acertou == true)
            mensagemVencedor();
        else
            mensagemPerdedor();

        do
        {
            mensagemJogarNovamente();
            seletor = entradaInteiro();
        }while(seletor < 1 || seletor > 2);

        if(seletor == 2)
            limpaTerminal();

    }while(seletor == 1);

    return 0;
}

void mensagemJogarNovamente()
{
    cout << "       Jogar Novamente:  Sim [1]  Não [2]\n\n";

    return;
}

void mensagemPerdedor()
{
    cout << "\n\n       Você perdeu! Tente na proxima!\n\n";

    return;
}

void mensagemVencedor()
{
    cout << "\n\n       Parabens você ganhou!\n\n";
    cout << "              ___________\n";
    cout << "             '._==_==_=_.'\n";
    cout << "             .-\\:      /-.\n";
    cout << "            | (|:.     |) |\n";
    cout << "             '-|:.     |-'\n";
    cout << "               \\::.    /\n";
    cout << "                '::. .'\n";
    cout << "                  ) (\n";
    cout << "                _.' '._\n";
    cout << "               `\"\"\"\"\"\"\"`\n\n";

    return;
}

void mentagemNumeroMenor()
{
    cout << "       O número chutado é MENOR do que o sorteado\n\n";

    return;
}

void mensagemNumeroMaior()
{
    cout << "       O número chutado é MAIOR do que o sorteado\n\n";

    return;
}

bool numeroMenor(int seletor, int numeroAleatorio)
{
    if(seletor < numeroAleatorio)
        return true;
    else    
        return false;
}

bool numeroMaior(int seletor, int numeroAleatorio)
{
    if(seletor > numeroAleatorio)
        return true;
    else    
        return false;
}

bool acertouNumero(int seletor, int numeroAleatorio)
{
    if(seletor == numeroAleatorio)
        return true;
    else
        return false;
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

void limpaTerminal()
{
    system("clear || cls");

    return;
}

void mostraCabecalho()
{
    cout << "\n\n       **************************************************\n";
    cout << "       **************** Jogo Da Advinhação **************\n";
    cout << "       **************************************************\n\n";

    return;
}

void mostraHub()
{
    cout << "       Selecione a Dificuldade: Facil [1]  Normal [2]  Difícil [3]\n\n";

    return;
}

void escolheDificuldade(int seletor, int* tentativas, int* tentativasDificuldade)
{   
    int facil = 15;
    int normal = 10;
    int dificil = 5;

    switch (seletor)
    {
    case 1:
        *tentativas = *tentativasDificuldade = facil;
        break;

    case 2:
        *tentativas = *tentativasDificuldade = normal;
        break;

    case 3:
        *tentativas = *tentativasDificuldade = dificil;
        break;
        
    default:
        break;
    }

    return;
}

void mostraRangeDeNumeros()
{
    cout << "\n\n       Digite um número de 1 a 100:\n\n";
    return;
}

int geraNumeroAleatorio()
{
    int numeroAleatorio;

    srand(time(0));
    numeroAleatorio = 1 + (rand() % 100);

    return numeroAleatorio;
}

void mostraNumeroDeTentativas(int tentativas, int tentativasDificuldade)
{
    cout << "       Numero de tentativas: [" << tentativas << " / " << tentativasDificuldade << "]\n\n";

    return;
}

