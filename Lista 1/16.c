#include <stdio.h>

int main() {
    float n1, n2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    if (n1 < 0.0 || n1 > 10.0) {
        printf("Nota invalida\n");
        return 1;
    }

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    if (n2 < 0.0 || n2 > 10.0) {
        printf("Nota invalida\n");
        return 1;
    }

    media = (n1 + n2) / 2;
    printf("A media das notas e: %.2f\n", media);

    return 0;
}
