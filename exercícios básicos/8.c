#include <stdio.h>

int main() {

    int num, quadrado;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    quadrado = num * num;

    printf("O quadrado deste número é: %d", quadrado);

    return 0;
}