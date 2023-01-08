#include <stdio.h>
#include <stdlib.h>

int main() {

    int a;

    printf("----------------------\n");
    printf("|       자판기       |\n");
    printf("|   밀크커피 200원   |\n");
    printf("|                    |\n");
    printf("----------------------\n");
   
    printf("동전을 넣어주세요 : "); 
    scanf("%d", &a);
    printf("잔돈을 받아가세요 : %d\n", a-200);
    
    return 0;
}