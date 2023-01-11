#include <stdio.h>
#include <stdlib.h>

int main() {

    int y;
    printf("연도를 입력하세요 : ");
    scanf("%d", &y);

    if( y % 4 == 0 && y & 100 != 0 ) {      //정답코드 이해하기
        printf("1");
    }
    else if( y % 400 == 0) {
        printf("1");
    }
    else {
        printf("0");
    }

    return 0;
}