#include <stdio.h>

int main() {
    int x;
    int y;
    int z;
    printf("Insira o valor de x: ");
    scanf("%d", &x);
    printf("Insira o valor de y: ");
    scanf("%d", &y);
    z = x * y;
    printf("A multiplicação de %d por %d é %d.\n", x, y, z);
}
