#include <stdio.h>
#include <stdlib.h>

int main() {

    int a;
    printf("연도를 입력하세요 : ");
    scanf("%d", &a);

    if (!(a % 4) && (a % 100)) {
        printf("1");
    }
    else if (!(a % 400)) {
        printf("1");
    }
    else {
        printf("0");
    }

    return 0;
}