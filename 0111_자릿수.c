#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b = 0;
    printf("음이 아닌 정수를 입력하세요 : ");
    scanf("%d", &a);

    do {
        a = a / 10;
        b++;
    } while(a > 0);

    printf("%d", b);

    return 0;
}