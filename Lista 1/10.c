#include <stdio.h>
#include <math.h>

int main() {

    float num, raiz;

    printf("Digite um número maior que zero: ");
    scanf("%f", &num);

    if (num >= 0)
    {
        printf("A raiz quadrada de %.2f é: %.2f\n", num, sqrt(num));
    } else {
        printf("Número invalido");
    }

    return 0;
}

/*
#include <stdio.h>
#include <math.h>

int main() {

    float num;

    do
    {
        printf("Digite um número maior que 0: ");
        scanf("%f", &num);
    } while (num < 0);

     printf("A raiz quadrada de %.2f é: %.2f\n", num, sqrt(num));

    return 0;
}
*/