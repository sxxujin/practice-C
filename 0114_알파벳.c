#include <stdio.h>
#include <stdlib.h>

int main() {
    char a;

    printf("종료하려면 0, 시작하려면 대문자를 입력하세요 : ");
    while((a = getchar()) != '0') {
        printf("%c\n", a - 'A' + 'a');
        getchar();
    }

    return 0;
}