#include <stdio.h>

int main() {
    int num1, num2;

    //solicita dois números ao usuario
    printf("Digite dois números inteiros para fazer a soma deles: ");
    scanf("%d %d", &num1, &num2);

    //imprime a subtração dos dois números
    printf("A subtração desses dois números é: %d.\n", num1 - num2);

    return 0;
}