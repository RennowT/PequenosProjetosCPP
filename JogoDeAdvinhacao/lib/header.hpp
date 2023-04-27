#pragma once

/* ================================= Bibliotecas =============================== */
#include <iostream>

/* ============================ Declaração de Funções ========================== */
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
void mensagemNumeroMenor();
void mensagemVencedor();
void mensagemPerdedor();
void mensagemJogarNovamente();

/* =================================== Funções ================================== */

// Função que pergunta se o jogador quer jogar novamente
void mensagemJogarNovamente()
{
    std::cout << "       Jogar Novamente:  Sim [1]  Não [2]\n\n";

    return;
}

// Função que envia a mensagem para o perdedor
void mensagemPerdedor()
{
    std::cout << "\n\n       Você perdeu! Tente na proxima!\n\n";

    return;
}

// Função que envia a mensagem para o ganhador
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

// Função que manda a mensagem se o valor chutado for menor do que o numero secreto
void mensagemNumeroMenor()
{
    std::cout << "       O número chutado é MENOR do que o sorteado\n\n";

    return;
}

// Função que manda a mensagem se o valor chutado for maior do que o numero secreto
void mensagemNumeroMaior()
{
    std::cout << "       O número chutado é MAIOR do que o sorteado\n\n";

    return;
}

// Verifica se o número chutado é menor do que o número secreto
bool numeroMenor(int seletor, int numeroAleatorio)
{
    if(seletor < numeroAleatorio)
        return true;
    else    
        return false;
}

// Verifica se o número chutado é maior do que o número secreto
bool numeroMaior(int seletor, int numeroAleatorio)
{
    if(seletor > numeroAleatorio)
        return true;
    else    
        return false;
}

// Verifica se acertou o número secreta
bool acertouNumero(int seletor, int numeroAleatorio)
{
    if(seletor == numeroAleatorio)
        return true;
    else
        return false;
}

// Faz a entrada de um valor inteiro
int entradaInteiro()
{
    int seletor;

    std::cout << ">>> ";
    std::cin >> seletor;
    std::cout << "\n";

    return seletor;
}

// Verifica se o jogo terminou
bool jogoTerminou(int tentativas, bool acertou)
{
    if(tentativas == 0 || acertou == true)
        return true;
    else
        return false;
}

// Limpa o terminal
void limpaTerminal()
{
    system("clear || cls");

    return;
}

// Mostra o Cabeçalho do jogo
void mostraCabecalho()
{
    std::cout << "\n\n       **************************************************\n";
    std::cout << "       **************** Jogo Da Advinhação **************\n";
    std::cout << "       **************************************************\n\n";

    return;
}

// Mostra o hub de dificuldade de jogo
void mostraHub()
{
    std::cout << "       Selecione a Dificuldade: Facil [1]  Normal [2]  Difícil [3]\n\n";

    return;
}

// Atribui a quantidade de tentativas de acordo com a dificuldade
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

// Mostra o range de numeros para serem chutados
void mostraRangeDeNumeros()
{
    std::cout << "\n\n       Digite um número de 1 a 100:\n\n";

    return;
}

// Gera o numero aleatório
int geraNumeroAleatorio()
{
    int numeroAleatorio;

    srand(time(0));
    numeroAleatorio = 1 + (rand() % 100);

    return numeroAleatorio;
}

// Mostra o número de tentativas e quantas faltam
void mostraNumeroDeTentativas(int tentativas, int tentativasDificuldade)
{
    std::cout << "       Numero de tentativas: [" << tentativas << " / " << tentativasDificuldade << "]\n\n";

    return;
}

