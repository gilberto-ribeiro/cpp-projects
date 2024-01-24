#include <stdio.h>

//#define NUMERO_DE_TENTATIVAS 5

int main() {

    int chute;
    int numero_secreto = 42;
    int tentativa = 1;
    int ganhou = 0;
    printf("***********************\n");
    printf("* JOGO DA ADIVINHACAO *\n");
    printf("***********************\n");

    while(!ganhou) {
        printf("Tentativa %d.\n", tentativa);
        printf("Insira o seu chute: ");
        scanf("%d", &chute);

        if(chute < 0) {
            printf("Chute negativo, tente novamente.\n");
            continue;
        }

        int acertou = chute == numero_secreto;
        int maior = chute > numero_secreto;
        int menor = chute < numero_secreto;

        if(acertou) {
            printf("Voce acertou o numero secreto!\n");
            ganhou = 1;
        }
        else if(maior) {
            printf("Seu chute e maior que o numero secreto.\n");
        }
        else if(menor) {
            printf("Seu chute e menor que o numero secreto.\n");
        }
        tentativa++;
    }

    printf("Fim de jogo!\n");
    printf("Voce acertou em %d tentativas!\n", tentativa-1);
}
