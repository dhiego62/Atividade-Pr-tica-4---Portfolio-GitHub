#include <stdio.h>

int main() {
    int n, num, maior, i = 1;
    printf("Quantos números você quer comparar? ");
    scanf("%d", &n);
    printf("Digite o número 1: ");
    scanf("%d", &maior);

    while (i < n) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &num);
        if (num > maior) {
            maior = num;
        }
        i++;
    }
    printf("O maior número é: %d\n", maior);
    return 0;
}
