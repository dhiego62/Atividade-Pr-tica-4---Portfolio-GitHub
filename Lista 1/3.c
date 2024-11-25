#include <stdio.h>

int main() {

    int num1, num2, num3, soma;

    printf("Digite três números inteiros: ");
    scanf("%d %d %d",&num1, &num2, &num3);

    soma = num1 + num2 + num3;

    printf("A soma desses três valores é: %d\n", soma);

    return 0;
}