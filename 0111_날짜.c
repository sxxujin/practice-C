#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, c;
    printf("날짜를 입력하세요(mm/dd/yy) : ");
    scanf("%d/%d/%d", &a, &b, &c);

    if (b == 1) {
        printf("Dated this 1st day of ");
    }
    else if (b == 2) {
        printf("Dated this 2nd day of ");
    }
    else if (b == 3) {
        printf("Dated this 3rd day of ");
    }
    else {
        printf("Dated this %dth day of ", b);
    }

    if (a == 1) {
        printf("January, 20%d", c);
    }
    else if (a == 2) {
        printf("Febuary, 20%d", c);
    }
    else if (a == 3) {
        printf("March, 20%d", c);
    }
    else if (a == 4) {
        printf("April, 20%d", c);
    }
    else if (a == 5) {
        printf("May, 20%d", c);
    }
    else if (a == 6) {
        printf("June, 20%d", c);
    }
    else if (a == 7) {
        printf("July, 20%d", c);
    }
    else if (a == 8) {
        printf("August, 20%d", c);
    }
    else if (a == 9) {
        printf("September, 20%d", c);
    }
    else if (a == 10) {
        printf("October, 20%d", c);
    }
    else if (a == 11) {
        printf("November, 20%d", c);
    }
    else if (a == 12) {
        printf("December, 20%d", c);
    }
    
    return 0;
}