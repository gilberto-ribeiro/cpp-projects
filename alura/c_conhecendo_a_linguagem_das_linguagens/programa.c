#include <stdio.h>

int main() {
    // Início do cabeçalho
    int numero_secreto, chute;
    numero_secreto = 42;
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");
    printf("Insira o seu chute: ");
    scanf("%d", &chute);
    printf("Seu chute foi: %d\n", chute);
}
