#include <stdio.h>

int main() {
    float salario;
    printf("Digite o salário: ");
    scanf("%f", &salario);
    if (salario > 2000)
        printf("Salário com desconto: R$%.2f\n", salario * 0.9);
    else
        printf("Salário sem desconto: R$%.2f\n", salario);
    return 0;
}
