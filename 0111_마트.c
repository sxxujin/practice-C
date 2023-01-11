#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, c, d, e, f = 0;
    printf("돈을 입력하세요 : ");
    scanf("%d", &a);
    printf("물건 개수를 입력하세요 : ");
    scanf("%d", &b);

    while ( b > 0 ) {
        printf("상품 가격과 개수를 입력하세요 : ");
        scanf("%d %d", &c, &d);
        b--;
        e = c * d;
        f += e;
    }
    
    if (a == f) {
        printf("yes\n");
    }
    else if (a != f) {
        printf("no\n");
    }

    return 0;
}