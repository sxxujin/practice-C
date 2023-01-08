#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int a;
    int b;

    printf("자연수 a를 입력하세요 : ");
    scanf("%d", &a);
    printf("자연수 b를 입력하세요 : ");
    scanf("%d", &b);

    printf("a + b = %d\n", a+b);
    printf("a - b = %d\n", a-b);
    printf("a * b = %d\n", a*b);
    printf("a %% b = %d\n", a%b);

    return 0;
}