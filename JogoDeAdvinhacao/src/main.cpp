#include <iostream>
#include <cstdlib>
#include <ctime>

#include "../lib/header.hpp"

using namespace std;

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

