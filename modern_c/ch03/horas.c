#include <stdio.h>

int main() {
    int hora, incremento;
    int nova_hora;
    printf("Insira a hora: ");
    scanf("%d", &hora);
    printf("Insira o incremento: ");
    scanf("%d", &incremento);
    nova_hora = (hora + incremento) % 12;
    printf("A nova hora e: %d.\n", nova_hora);
}
