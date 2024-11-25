#include <stdio.h>

int main() {
    int num1, num2;

    //solicita dois números ao usuario
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    //imprime o resultado
    printf("O produto desses dois números é %d.\n", num1 * num2);

    return 0;
}
