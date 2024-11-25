#include <stdio.h>

int main() {

    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("seu número digitado é par");
    }

    else {
        printf("Seu número digitado é impar");
    }
    
    return 0;
}