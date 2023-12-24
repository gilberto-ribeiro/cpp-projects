#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int segundo = time(0);
    srand(segundo);
    printf("%d\n", segundo);
    int n1 = rand() % 100;
    int n2 = rand() % 100;
    printf("%d;%d\n", n1, n2);
}
