#include <stdio.h>
#include <stdlib.h>

int main() {
/*
    char chars[4];
    sprintf(chars, "ABCD");

    for (int i = 0; i < 4; i++) {
        printf("%d %d\n", chars, &chars[i]);
    }
*/

    long ints[4] = {1, 2, 3, 4};

    for(int i = 0; i < 4; i++) {
        printf("%d %d %d\n", ints, &ints[i], ints[i]);
    }
}
