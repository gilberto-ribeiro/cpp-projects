#include <stdio.h>

int main() {

    int numero_secreto, chute, tentativas;
    tentativas = 1;
    numero_secreto = 42;

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
            printf("O seu chute foi maior que o número secreto\n");
        }
        else {
            printf("O seu chute foi menor que o número secreto.\n");
        }
        tentativas++;
    }

    printf("Fim de jogo!\n");
    printf("Você acertou em %d tentativas!\n", tentativas);
}
