#include <stdio.h>

int main() {

    float c, f;

    printf("Digite a temperatura em graus Celsius para converter em Fahrenheit: ");
    scanf("%f", &c);

    f = (c * 9 / 5) + 32;

    printf("A temperatura em Fahrenheit é: %.2f", f);

    return 0;
}