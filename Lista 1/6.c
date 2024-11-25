#include <stdio.h>

int main() {

    float valor_real, cotacao_dolar;

    printf("Digite o valor em reais e a cotação do dólar separados por espaço: ");
    scanf("%f %f", &valor_real, &cotacao_dolar);

    printf("O valor em dólares é: %.2f\n", valor_real / cotacao_dolar);
    
    return 0;
}