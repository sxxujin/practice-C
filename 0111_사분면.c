#include <stdio.h>
#include <stdlib.h>

int main() {

    int x, y;
    printf("x, y 좌표를 입력하세요 : ");
    scanf("%d %d", &x, &y);

    if( x > 0 && y > 0){
        printf("1사분면");
    }
    else if( x < 0 && y > 0){
        printf("2사분면");
    }
    else if( x < 0 && y < 0){
        printf("3사분면");
    }
    else if( x < 0 && y > 0){
        printf("4사분면");
    }
    else{
        printf("사분면 위의 점이 아닙니다");
    }

    return 0;
}