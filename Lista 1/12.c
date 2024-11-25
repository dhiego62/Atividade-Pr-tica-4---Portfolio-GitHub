#include <stdio.h>
#include <math.h>

int main(){
    float num;

    printf("Digite um numero: ");
    scanf("%f", &num);

    if (num > 0) {
        printf("O quadrado de %.2f é: %.2f\n", num, pow(num, 2));
        printf("A raiz quadrada de %.2f é: %.2f\n", num, sqrt(num));
    }
    
    return 0;
}
