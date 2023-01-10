#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, c, d, e, f;
    
    scanf("%d", &a);
    scanf("%d", &b);

    c = b%10;
    d = b/100;
    e = d*100;
    f = (b-c-e)/10;

    printf("%d\n", a*c);
    printf("%d\n", a*f);
    printf("%d\n", a*d);
    printf("%d\n", a*b);

    return 0;
}