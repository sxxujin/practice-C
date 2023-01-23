int main() {
    int a, b = 0;

    for(a = 1;; a++) {
        b += a;
        if(b > 300) break;
    }

    printf("총합은 %d, 마지막으로 더한 값은 %d 입니다.", b, a);

    return 0;
}