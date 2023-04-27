/* ================================= Bibliotecas =============================== */

// Bibliotecas
#include <iostream>
#include <cstdlib>
#include <ctime>

// Headers
#include "../lib/header.hpp"

// Namespace
using namespace std;

/* ================================= Função Main =============================== */

int main()
{
    /* ============================== Variáveis ============================= */

    int seletor; // Variável para entrada de dados
    int tentativas; // Marca as tentativas restantes para o jogador
    int numeroAleatorio; // Armazena o numero aleatório sorteado
    bool acertou; // Verifica se acertou ou não
    int tentativasDificuldade; // Armazena a quantidade de tentativas cada dificuldade disponibiliza

    /* ======================== Loop Principal do jogo ====================== */

    do
    {   
        limpaTerminal(); // Limpa Tela

        mostraCabecalho(); // Mostra o cabeçãlho do jogo
        mostraHub(); // Mostra o hub para escolha da dificuldade
        do // Entrada de dados de 1 a 3
        {
            seletor = entradaInteiro(); 
        }while(seletor < 1 || seletor > 3);
        
        // Seleciona a dificuldade de acordo com a entrada de dados
        escolheDificuldade(seletor, &tentativas, &tentativasDificuldade); 

        limpaTerminal(); // Limpa Tela

        acertou = false;
        numeroAleatorio = geraNumeroAleatorio(); // Gera o número aleatório
        mostraRangeDeNumeros(); // Mostra a mensagem dos numeros possiveis

        /* ========== loop para verificar se o jogo terminou ========= */

        do
        {
            // Mostra número de tentativas e quantas faltam
            mostraNumeroDeTentativas(tentativas, tentativasDificuldade);
            do // Entrada de dados de 1 a 100
            {
                seletor = entradaInteiro();
            } while (seletor < 1 || seletor > 100);
            
            // Verifica se acertou o numero aleatório
            if(acertouNumero(seletor, numeroAleatorio))
                acertou = true;
            else 
            {   
                // Verifica se o valor chutado é maior do que o numero secreto
                if(numeroMaior(seletor, numeroAleatorio))
                    mensagemNumeroMaior();
                // Verifica se 0 valor chutado é menor do que o numero secreto
                if(numeroMenor(seletor, numeroAleatorio))
                    mensagemNumeroMenor();
                
                tentativas--; // Subtrai o número de tentativas em caso de erro
            }

        }while(!jogoTerminou(tentativas, acertou));

        limpaTerminal(); // Limpa Terminal

        /* ============= Verifica se ganhou ou não ============ */

        // Mostra a mensagem para o vencedor ou perdedor
        if(acertou == true)
            mensagemVencedor();
        else
            mensagemPerdedor();

        /* ========== Pergunta se vai jogar novamente ========= */

        mensagemJogarNovamente(); // Pergunta se o jogador quer jogar novamente
        do // Entrada de dados de 1 a 2
        {
            seletor = entradaInteiro();
        }while(seletor < 1 || seletor > 2);

        /* ========= Limpa a tela quando fexhar o jogo ======== */

        if(seletor == 2)
            limpaTerminal();

    }while(seletor == 1);

    return 0;
}

