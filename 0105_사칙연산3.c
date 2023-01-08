#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b;

    printf("자연수 a, b를 입력하세요 : ");
    scanf("%d%d", &a, &b);

    printf("a+b = %d\n", a+b);
    printf("a-b = %d\n", a-b);
    printf("a*b = %d\n", a*b);
    printf("a/b = %d\n", a/b);

    return 0;
}