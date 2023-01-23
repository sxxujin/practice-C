#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, x, y;

    printf("n을 입력하세요 : ");
    scanf("%d", &n);

    for(x = 1; x <= n; x++) {
        for(y = 1; y <= x; y++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}