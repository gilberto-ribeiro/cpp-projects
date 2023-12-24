#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PONTUACAO_MAXIMA 1000
#define INTERVALO 100

int main() {

    int segundo = time(0);
    srand(segundo);

    int numero_secreto, chute, tentativas;
    double pontos = PONTUACAO_MAXIMA;
    tentativas = 1;
    numero_secreto = rand() % INTERVALO + 1;

    // Início do cabeçalho
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    while(1) {
        printf("Tentativa %d.\n", tentativas);

        printf("Insira o seu chute: ");
        scanf("%d", &chute);

        int acertou = (chute == numero_secreto);
        int maior = (chute > numero_secreto);

        if(chute < 0) {
            continue;
        }
        else if(acertou) {
            printf("Parabéns! Você acertou!\n");
            break;
        }
        else if(maior) {
            printf("O seu chute foi maior que o número secreto.\n");
        }
        else {
            printf("O seu chute foi menor que o número secreto.\n");
        }
        tentativas++;
        // Casting:
        double pontos_perdidos = (double)abs(chute - numero_secreto) / (double)2;
        pontos -= pontos_perdidos;
    }

    printf("Fim de jogo!\n");
    printf("Você acertou em %d tentativas!\n", tentativas);
    printf("Pontuação final: %.1f.\n", pontos);
}

/*
Números inteiros:
short: 2 bytes - 16 bits
int: 4 bytes - 32 bits
long: 8 bytes - 64 bits

Números flutuantes:
float: 4 bytes - 32 bits
double: 8 bytes - 64 bits
*/

