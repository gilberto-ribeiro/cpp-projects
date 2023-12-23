#include <stdio.h>

int main() {

    int numero_secreto, chute;
    numero_secreto = 42;

    // Início do cabeçalho
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    printf("Insira o seu chute: ");
    scanf("%d", &chute);

    int acertou = (chute == numero_secreto);

    printf("Código acertou: %d.\n", acertou);

    if(acertou) {
        printf("Parabéns! Você acertou!\n");
    }
    else {

        int maior = (chute > numero_secreto);

        if(maior) {
            printf("O seu chute foi maior que o número secreto\n");
        }
        else {
            printf("O seu chute foi menor que o número secreto.\n");
        }
    }
}
