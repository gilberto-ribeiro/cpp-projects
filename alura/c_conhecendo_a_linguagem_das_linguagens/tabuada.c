#include <stdio.h>

int main() {

    int numero, multiplicacao;

    printf("Insira o número: ");
    scanf("%d", &numero);

    for(int i = 1; i <= 10; i++) {
        multiplicacao = numero * i;
        printf("%d x %2d = %d\n", numero, i, multiplicacao);
    }
}
