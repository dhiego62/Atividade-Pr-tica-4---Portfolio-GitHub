#include <stdio.h>

int main() {

    int num1, num2, div, result;

    //solicita dois números inteiros ao usuario
    printf("digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    //solicita o numero da divisão e garante que seja diferente de zero
    do {
    printf("digite o número divisor (diferente de 0): ");
    scanf("%d", &div);
    }
    while (div == 0);

    //calcula o resultado da divisão
    result = (num1 + num2) / div;

    //imprime o resultado
    printf("o resultado da divisão é: %d", result);

    return 0;
}