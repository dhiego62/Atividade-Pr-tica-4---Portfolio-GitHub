#include <stdio.h>

int main() {
    int atual, anterior = -1;
    do {
        printf("Digite um número: ");
        scanf("%d", &atual);
        if (atual == anterior) {
            printf("Número repetido! Encerrando o programa.\n");
            break;
        }
        anterior = atual;
    } while (1);
    return 0;
}
