#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("분수의 합을 입력하세요 : ");
    int a, b, c, d;
    scanf("%d/%d+%d/%d", &a, &b, &c, &d);
    printf("분수의 합 : %d/%d", a*d+b*c, b*d);
    
    return 0;
}