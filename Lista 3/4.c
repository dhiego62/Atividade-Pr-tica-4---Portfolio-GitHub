#include <stdio.h>

int main() {
    int chute, numero = 42;

    while (1) {
        printf("Adivinhe o número: ");
        scanf("%d", &chute);
        if (chute == numero) {
            printf("Parabéns! Você acertou!\n");
            break;
        } else {
            printf("Errado! Tente novamente.\n");
        }
    }
    return 0;
}
