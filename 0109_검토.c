#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int a = 1;
    int b = 2;
    b = a++;
    printf("%d, %d\n", a, b);
    
    int num1 = 2;
    int num2 = 8;
    int num3;
    int num4;
    num1++;
    num3 = --num1;
    --num2;
    num4 = num2++;
    printf("%d\n", num3);
    printf("%d\n", num4);

    return 0;
}