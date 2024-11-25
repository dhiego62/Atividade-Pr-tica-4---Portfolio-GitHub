#include <stdio.h>

int  main() {

    float num, quadrado;

    printf("Digite um número real: ");
    scanf("%f", &num);

    quadrado = num * num;

    printf("O quadrado desse número é: %.2f\n", quadrado);

    return 0;
}