#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PONTUACAO_MAXIMA 1000
#define INTERVALO 100

int main() {

    int segundo = time(0);
    srand(segundo);

    int numero_secreto, chute, numero_de_tentativas, i;
    double pontos = PONTUACAO_MAXIMA;

    numero_secreto = rand() % INTERVALO + 1;

    // Início do cabeçalho
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int nivel;
    printf("Escolha a dificuldade:\n");
    printf("Fácil (1) Médio (2) Difícil (3)\n");
    scanf("%d", &nivel);

    switch(nivel) {
        case 2:
            numero_de_tentativas = 10;
            break;
        case 3:
            numero_de_tentativas = 7;
            break;
        default:
            numero_de_tentativas = 20;
            break;
    }

    printf("Número de tentativas: %d.\n", numero_de_tentativas);

    int acertou = 0;

    for(i = 1; i <= numero_de_tentativas; i++) {
        printf("Tentativa %d.\n", i);

        printf("Insira o seu chute: ");
        scanf("%d", &chute);

        acertou = (chute == numero_secreto);
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
        // Casting:
        double pontos_perdidos = (double)abs(chute - numero_secreto) / (double)2;
        pontos -= pontos_perdidos;
    }

    printf("Fim de jogo!\n");

    if(acertou) {
        printf("Você acertou em %d tentativas!\n", i);
    }
    else {
        printf("Você perdeu!\n");
        pontos = (double)0;
    }
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

