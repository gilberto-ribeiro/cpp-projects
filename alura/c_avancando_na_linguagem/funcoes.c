#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void potencia(int a, int b) {
    int c = 1;
    for(int i = 0; i < b; i++) {
        c *= a;
    }
    printf("%d**%d = %d\n", a, b, c);
}

void soma(int numeros[10]) {
    int s = 0;
    for(int i = 0; i < 10; i++) {
        s += numeros[i];
    }
    printf("Soma: %d\n", s);
}

void soma2(int* num, int a, int b) {
    (*num) = a + b;
}

int soma3(int* nums, int n) {
    int s = 0;
    for(int i = 0; i < n; i++) {
        s += nums[i];
    }
    return s;
}

int main() {
    int nums[4] = {10, 20, 30, 40};
    int total = soma3(nums, 4);
    printf("%d\n", total);
}
