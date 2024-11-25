#include <stdio.h>

int main() {
    int num, i = 1;
    printf("Digite um número para a tabela de multiplicação: ");
    scanf("%d", &num);
    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }
    return 0;
}
