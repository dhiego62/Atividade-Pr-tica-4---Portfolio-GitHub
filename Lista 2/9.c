#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operacao;
    printf("Digite dois números e a operação (+, -, *, /): ");
    scanf("%f %f %c", &num1, &num2, &operacao);

    if (operacao == '+')
        resultado = num1 + num2;
    else if (operacao == '-')
        resultado = num1 - num2;
    else if (operacao == '*')
        resultado = num1 * num2;
    else if (operacao == '/')
        if (num2 != 0)
            resultado = num1 / num2;
        else {
            printf("Erro: divisão por zero\n");
            return 0;
        }
    else {
        printf("Operação inválida\n");
        return 0;
    }
    printf("Resultado: %.2f\n", resultado);
    return 0;
}
