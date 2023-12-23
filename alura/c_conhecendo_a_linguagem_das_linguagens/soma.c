#include <stdio.h>

#define NUMERO_FINAL 100

int main() {
    int soma = 0;
    
    for(int i = 1; i <= NUMERO_FINAL; i++) {
        soma += i;
    }
    printf("Soma: %d.\n", soma);
}
