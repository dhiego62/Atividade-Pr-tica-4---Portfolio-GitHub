#include <stdio.h>

int main() {
    int num;
    while (1) {
        printf("Digite um número (negativo para parar): ");
        scanf("%d", &num);
        if (num < 0) {
            break;
        }
    }
    printf("Programa encerrado.\n");
    return 0;
}
