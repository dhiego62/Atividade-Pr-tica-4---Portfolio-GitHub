#include <stdio.h>

int main() {

    float salario, salarioTotal, gratificacao;

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    gratificacao = salario * 0.05;
    salarioTotal = salario + gratificacao;

    printf("Salario total a receber: %.2f\n", salarioTotal);

    return 0;
}