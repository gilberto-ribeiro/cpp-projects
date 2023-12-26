#include <stdio.h>
#include <stdlib.h>

void calcula(int* c2) {
    printf("calcula: %d %d\n", (*c2), c2);
    (*c2)++;
    printf("calcula: %d %d\n", (*c2), c2);
}

int main() {
    int c = 10;
    printf("main: %d %d\n", c, &c);
    calcula(&c);
    c++;
    printf("main: %d %d\n", c, &c);
}
