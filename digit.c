#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b = 0;
    printf("0, 양의정수를 입력하세요 : ");
    scanf("%d", &a);

    do {
        a /= 10 ; // a = a / 10;
        b++;
    } while(a > 0);
    
    printf("%d", b);
    
    return 0;
}