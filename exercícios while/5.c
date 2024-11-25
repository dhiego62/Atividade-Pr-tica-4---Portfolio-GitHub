#include <stdio.h>

int main() {
    int i = 0, num, soma = 0;
    while (i < 10) {
        printf("Digite um número: ");
        scanf("%d", &num);
        soma += num;
        i++;
    }
    printf("A média é: %.2f\n", soma / 10.0);
    return 0;
}
