#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, c, d, e;
    
    scanf("%d", &a);
    scanf("%d", &b);

    c = b%10;
    d = (b/100)*100;
    e = (b%100)-c;

    printf("%d\n", a*c);
    printf("%d\n", a*e);
    printf("%d\n", a*d);
    printf("%d\n", a*b);

    return 0;
}