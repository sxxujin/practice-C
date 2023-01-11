#include <stdio.h>
#include <stdlib.h>

int main() {

    int a;
    printf("시험 성적 : ");
    scanf("%d", &a);

    switch(a / 10) {
        case 10:
        case 9: printf("A"); break;
        case 8: printf("B"); break;
        case 7: printf("C"); break;
        case 6: printf("D"); break;
        default: printf("F");
    }
    
    return 0;
}