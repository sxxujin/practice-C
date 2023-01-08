#include <stdio.h>
#include <stdlib.h>

int main() {

    int a,b;

    printf("자연수 a, b를 입력하세요 : ");
    scanf("%d", &a);
    scanf("%d", &b);
    
    printf("a + b = %d\n", a+b);
    printf("a - b = %d\n", a-b);
    printf("a * b = %d\n", a*b);
    printf("a %% b = %d\n", a%b);

    return 0;
}

// 숫자를 입력할 때 쉼표를 넣으면 계산 값이 달라지는 이유가 궁금해요