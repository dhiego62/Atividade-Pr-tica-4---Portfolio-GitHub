#include <stdio.h>

int main() {
    int numero = 42, chute;
    do {
        printf("Adivinhe o número: ");
        scanf("%d", &chute);
        if (chute != numero) {
            printf("Errado! Tente novamente.\n");
        }
    } while (chute != numero);
    printf("Parabéns! Você acertou!\n");
    return 0;
}
