#include <stdio.h>

int main() {
    int atual, anterior = -1;
    while (1) {
        printf("Digite um número: ");
        scanf("%d", &atual);
        if (atual == anterior) {
            printf("Número repetido! Encerrando o programa.\n");
            break;
        }
        anterior = atual;
    }
    return 0;
}
