#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    bool a, b, c, d, e, f, g, h;

    a = true;
    b = false;
    c = ! a;
//    d = not a;
    e = a && b;
//    f = a and b;
    g = a || b;
//    h = a or b;

    printf("%d %d %d %d %d", a, b, c, e, g);
}
