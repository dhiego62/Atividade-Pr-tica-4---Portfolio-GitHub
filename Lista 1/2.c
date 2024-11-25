#include <stdio.h>

int main() {

    float num;

    printf("Digite um número real: ");
    scanf("%.2f", &num);

    printf("O número digitado foi: %.2f\n", num);

    return 0;
}