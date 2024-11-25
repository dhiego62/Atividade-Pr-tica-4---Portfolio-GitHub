#include <stdio.h>

int main() {
    int num;
    do {
        printf("Digite um número (negativo para parar): ");
        scanf("%d", &num);
    } while (num >= 0);
    printf("Programa encerrado.\n");
    return 0;
}
