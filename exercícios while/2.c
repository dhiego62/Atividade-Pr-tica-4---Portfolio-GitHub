#include <stdio.h>

int main() {
    int n, i = 1;
    printf("Digite um número: ");
    scanf("%d", &n);
    while (i <= n) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
