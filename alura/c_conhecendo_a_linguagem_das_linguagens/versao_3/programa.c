#include <stdio.h>

int main() {
    // Imprime o cabeçalho do nosso jogo
    printf("************************************\n");
    printf("* Bem vindo ao jogo de adivinhação *\n");
    printf("************************************\n");

    int numero_secreto = 42;
    int tentativas = 1;
    int chute;

    while (1) {

        printf("\nTentativa %d.\n", tentativas);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);

        printf("Seu chute foi %d.\n", chute);

        if (chute < 0) {
            printf("Seu chute deve ser um número positivo!!!\n");
            continue;
        }

        int acertou = chute == numero_secreto;
        int maior = chute > numero_secreto;

        if (acertou) {
            printf("Parabéns!!! Você acertou!\n");
            break;
        }
        else if (maior) {
            printf("O número chutado é maior que o número secreto.\n");
        }
        else {
            printf("O número chutado é menor que o número secreto.\n");
        }
        tentativas++;
    }
    printf("\nFim de jogo!\n");

    if (tentativas == 1) {
        printf("Você acertou em %d tentativa!\n", tentativas);
    }
    else {
        printf("Você acertou em %d tentativas!\n", tentativas);
    }
}
