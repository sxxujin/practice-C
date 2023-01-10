#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    
    int c, d;
    c = (b/100)*100;
    d = b%10;

    printf("(3) : %d\n", a*d);
    printf("(4) : %d\n", a*(b-c-d));
    printf("(5) : %d\n", a*c);
    printf("(6) : %d\n", a*b);

    return 0;
}