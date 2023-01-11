#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b = 1;
    scanf("%d", &a);

    while(b <= a) {
        printf("%d %d\n", b, b*b);
        b++;
    }

    return 0;
}