#pragma once

#include <iostream>

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

void mensagemJogarNovamente()
{
    std::cout << "       Jogar Novamente:  Sim [1]  Não [2]\n\n";

    return;
}

void mensagemPerdedor()
{
    std::cout << "\n\n       Você perdeu! Tente na proxima!\n\n";

    return;
}

void mensagemVencedor()
{
    std::cout << "\n\n       Parabens você ganhou!\n\n";
    std::cout << "              ___________\n";
    std::cout << "             '._==_==_=_.'\n";
    std::cout << "             .-\\:      /-.\n";
    std::cout << "            | (|:.     |) |\n";
    std::cout << "             '-|:.     |-'\n";
    std::cout << "               \\::.    /\n";
    std::cout << "                '::. .'\n";
    std::cout << "                  ) (\n";
    std::cout << "                _.' '._\n";
    std::cout << "               `\"\"\"\"\"\"\"`\n\n";

    return;
}

void mentagemNumeroMenor()
{
    std::cout << "       O número chutado é MENOR do que o sorteado\n\n";

    return;
}

void mensagemNumeroMaior()
{
    std::cout << "       O número chutado é MAIOR do que o sorteado\n\n";

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

    std::cout << ">>> ";
    std::cin >> seletor;
    std::cout << "\n";

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
    std::cout << "\n\n       **************************************************\n";
    std::cout << "       **************** Jogo Da Advinhação **************\n";
    std::cout << "       **************************************************\n\n";

    return;
}

void mostraHub()
{
    std::cout << "       Selecione a Dificuldade: Facil [1]  Normal [2]  Difícil [3]\n\n";

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
    std::cout << "\n\n       Digite um número de 1 a 100:\n\n";

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
    std::cout << "       Numero de tentativas: [" << tentativas << " / " << tentativasDificuldade << "]\n\n";

    return;
}

