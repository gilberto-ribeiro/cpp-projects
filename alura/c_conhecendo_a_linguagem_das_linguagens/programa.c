#include <stdio.h>

#define NUMERO_DE_TENTATIVAS 10

int main() {

    int numero_secreto, chute;
    numero_secreto = 42;

    // Início do cabeçalho
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    for(int i=1; i <= NUMERO_DE_TENTATIVAS; i++) {
        printf("Tentativa %d de %d.\n", i, NUMERO_DE_TENTATIVAS);
        int teste = 1;
        while(teste) {
            printf("Insira o seu chute: ");
            scanf("%d", &chute);
            if(chute >= 0) {
                teste = 0;
            }
        }

        int acertou = (chute == numero_secreto);
        int maior = (chute > numero_secreto);
        int menor = (chute < numero_secreto);

//        printf("Código acertou: %d.\n", acertou);

        if(acertou) {
            printf("Parabéns! Você acertou!\n");
            break;
        }
        else if(maior) {
            printf("O seu chute foi maior que o número secreto\n");
        }
        else {
            printf("O seu chute foi menor que o número secreto.\n");
        }
    }

    printf("Fim de jogo!\n");
}
