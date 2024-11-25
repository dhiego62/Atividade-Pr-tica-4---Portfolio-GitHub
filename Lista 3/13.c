#include <stdio.h>

int main() {
    int num;
    while (1) {
        printf("Digite um número (0 para sair): ");
        scanf("%d", &num);

        if (num > 0) {
            printf("Positivo.\n");
        } else if (num < 0) {
            printf("Negativo.\n");
        } else {
            printf("Zero. Saindo...\n");
            break;
        }
    }
    return 0;
}
