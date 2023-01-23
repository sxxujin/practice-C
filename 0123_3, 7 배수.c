int main() {
    int a;

    for(a = 1; a < 100; a++) {
        if(a % 3 == 0 && a % 7 == 0) {
            printf("3의 배수이면서 7의 배수 = %d\n", a);
        }
        else if(a % 3 == 0 || a % 7 == 0) {
            printf("3의 배수이거나 7의 배수 = %d\n", a);
        }
    }

    return 0;
}