#include <stdlib.h>
#include <stdio.h>

int main() {
    int arg;
    scanf("%d", &arg);
    switch (arg) {
        case 1:
            puts("Amor\n");
            break;
        case 2:
            puts("Baixinho\n");
            break;
        case 3:
            puts("Coracao\n");
            break;
        case 4:
            puts("Dedinho\n");
            break;
        default:
            puts("Xuxa\n");
    }
}
