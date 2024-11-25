#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int aleatorio, chute;
    srand(time(NULL));
    aleatorio = rand() % 100 + 1;

    do {
        printf("Adivinhe o número (entre 1 e 100): ");
        scanf("%d", &chute);

        if (chute < aleatorio) {
            printf("Muito baixo!\n");
        } else if (chute > aleatorio) {
            printf("Muito alto!\n");
        }
    } while (chute != aleatorio);

    printf("Parabéns, você acertou!\n");
    return 0;
}
