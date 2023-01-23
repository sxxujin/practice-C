int main() {
    int a, b = 0;

    while(1) {
        printf("종료하려면 0, 더하려면 자연수를 입력하세요 : ");
        scanf("%d", &a);
        b += a;
        if(a == 0) break;
    }
    printf("지금까지 총 합은 %d 입니다.\n", b);
    
    return 0;
}