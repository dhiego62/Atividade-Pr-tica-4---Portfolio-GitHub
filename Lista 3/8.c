#include <stdio.h>

int main() {
    int num, soma = 0;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    for (; num != 0; num /= 10) {
        soma += num % 10;
    }
    printf("A soma dos dígitos é: %d\n", soma);
    return 0;
}
