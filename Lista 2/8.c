#include <stdio.h>

int main() {
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    if (num >= 10 && num <= 20)
        printf("Dentro do intervalo\n");
    else
        printf("Fora do intervalo\n");
    return 0;
}
