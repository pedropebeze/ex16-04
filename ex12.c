#include <stdio.h>

int maior(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int main() {
    int a, b;
    puts("Digite o primeiro numero:");
    scanf("%d", &a);
    puts("Digite o segundo numero:");
    scanf("%d", &b);
    printf("%d\n", maior(a, b));
    return 0;
}
