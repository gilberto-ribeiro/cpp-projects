#include <stdio.h>

#define NUMERO_DE_TENTATIVAS 5

int main() {
    // Imprime o cabeçalho do nosso jogo
    printf("************************************\n");
    printf("* Bem vindo ao jogo de adivinhação *\n");
    printf("************************************\n");

    int numero_secreto = 42;

    int chute;

    for (int i = 1; i <= NUMERO_DE_TENTATIVAS; i++) {

        printf("Tentativa %d de %d.\n", i, NUMERO_DE_TENTATIVAS);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);

        printf("Seu chute foi %d.\n", chute);

        int acertou = chute == numero_secreto;
        int maior = chute > numero_secreto;
        int menor = chute < numero_secreto;

        if (acertou) {
            printf("Parabéns!!! Você acertou!\n");
            break;
        }
        else if (maior) {
            printf("O número chutado é maior que o número secreto.\n");
        }
        else if (menor) {
            printf("O número chutado é menor que o número secreto.\n");
        }
    }
    printf("Fim de jogo!\n");
}
