#include <stdio.h>
#include <math.h>

int main() {

    float num;

    printf("Digite um número: ");
    scanf("%f", &num);

    if (num >= 0)
    {
        // raiz = sqrt(numero);
        printf("A raiz quadrada de %.2f é %.2f\n", num, sqrt(num));
    } else {
        //quadrado = pow(numero, 2);
        printf("%.2f ao quadrado é %.2f\n", num, pow(num, 2));
    }
    
    return 0;
}