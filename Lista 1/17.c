#include <stdio.h>

int main() {
    float salario, prestacao;

    // Entrada de dados
    printf("Digite o salario do trabalhador: ");
    scanf("%f", &salario);
    printf("Digite o valor da prestacao do emprestimo: ");
    scanf("%f", &prestacao);

    // Verificação da condição
    if (prestacao > 0.2 * salario) {
        printf("Emprestimo nao concedido\n");
    } else {
        printf("Emprestimo concedido\n");
    }

    return 0;
}
