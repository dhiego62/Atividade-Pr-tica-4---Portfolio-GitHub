#include <stdio.h>

int main() {

    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num % 5 == 0)
    {
        printf("O número (%d) é multiplo de 5", num);
    } else
    {
        printf("O número (%d) não é multiplo de 5", num);
    }
    

    return 0;
}