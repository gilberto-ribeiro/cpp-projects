#include <stdio.h>

#define NUMERO_FINAL 100

int main() {
    int tot = 0;
    for (int i = 1; i <= NUMERO_FINAL; i++) {
        tot += i;
    }
    printf("A soma de 1 a %d é %d.\n", NUMERO_FINAL, tot);
}
