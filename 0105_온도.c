#include <stdio.h>
#include <stdlib.h>

int main() {
    float a;
    printf("화씨온도를 입력하세요 : ");
    scanf("%f", &a);
    printf("섭씨온도는 %.1f 입니다\n", (a-32)*5/9);

    return 0;
}