#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chute, aleatorio;
    srand(time(NULL));
    aleatorio = rand() % 100 + 1;

    while (1) {
        printf("Adivinhe o número (entre 1 e 100): ");
        scanf("%d", &chute);

        if (chute == aleatorio) {
            printf("Parabéns, você acertou!\n");
            break;
        } else if (chute < aleatorio) {
            printf("Muito baixo!\n");
        } else {
            printf("Muito alto!\n");
        }
    }
    return 0;
}
