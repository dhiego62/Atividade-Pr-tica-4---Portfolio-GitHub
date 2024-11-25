#include <stdio.h>

int main() {

    float n1, n2, n3, n4, media;

    printf("Digite as quatro notas: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    printf("A média será: %.2f\n", media);

    return 0;
}