#include <stdio.h>

int main() {

    float num1, num2, num3, media;

    printf("Digite três números: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    media = (num1 + num2 + num3) / 3;

    printf("A média aritmética desses três valore é: %.2f", media);
    
    return 0;
}