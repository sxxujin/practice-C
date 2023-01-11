#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int a, b = 1, x;
    scanf("%d", &a);
    
    while( b <= 9 ) {
        x = a * b;
        printf("%d * %d = %d\n", a, b, x);
        b++;
    }

    return 0;
}