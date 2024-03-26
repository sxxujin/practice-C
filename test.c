#include <stdio.h>
#define switch(type, a, b) do{type t = a; a = b; b = t;} while(0)

int conv(int n, int i, char arr[]) {
    int c = 0;
    char dic[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    if(n == 0) {
        arr[c++] == dic[0];
    }
    else {
        while(n) {
            arr[c++] = dic[n % i];
            n /= i;
        }
    }
    
    for(int j = 0; j < c / 2; j++) {
        switch(char, arr[j], arr[c - j - 1]);
    }

    return c;
}

int main() {
    int n, i, count, r;
    char arr[500];

    do {
        printf("10진수를 기수 변환합니다.\n");

        do {
            printf("변환하는 음이 아닌 정수: ");
            scanf("%d", &n);
        } while(n < 0);
    
        do {
            printf("어떤 진수로 변환할까요?(2-36): ");
            scanf("%d", &i);
        } while(i < 2 || i > 36);

        count = conv(n, i, arr);

        printf("%d진수로는 ", i);
        for(int j = 0; j < count; j++) {
            printf("%c", arr[j]);
        }
        printf(" 입니다.\n");

        do {
            printf("한 번 더 할까요?(1--예/0--아니오): ");
            scanf("%d", &r);
        } while((r != 0) && (r!= 1));
    } while(r);

    return 0;
}