#include <stdio.h>

int main() {

    int num=0, antecessor=0, sucessor=0;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    antecessor = num - 1;
    sucessor = num + 1;

    printf("O seu número digitado foi (%d), seu antecessor é (%d) e o sucessor (%d)\n", num, antecessor, sucessor);
    
    return 0;
}