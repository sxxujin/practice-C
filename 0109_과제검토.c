#include <stdio.h>
#include <stdlib.h>

int main() {

    int a = 1;
    int b = 2;
    b = ++a;
    printf("%d %d\n", a, b);

    int x = 1;
    int y = 2;
    y = --x;
    printf("%d %d\n", x, y);

    return 0;
}