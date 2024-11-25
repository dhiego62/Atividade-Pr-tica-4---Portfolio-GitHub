#include <stdio.h>

int main() {
    int soma = 0, num;

    for (int i = 0; i < 10; i++) {
        printf("Digite um número: ");
        scanf("%d", &num);
        soma += num;
    }
    printf("A média é: %.2f\n", soma / 10.0);
    return 0;
}
