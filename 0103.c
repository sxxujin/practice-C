#include <stdio.h>
#include <stdlib.h>

int main() {
    float a;
    printf("화씨온도를 입력하세요 : ");
    scanf("%f", &a);
    printf("섭씨온도 : %.1f", (a-32)*5/9);

    system("pause");
    return 0;
}