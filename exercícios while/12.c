#include <stdio.h>

int main() {
    int num, reverso = 0, original;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    original = num;

    while (num != 0) {
        reverso = reverso * 10 + (num % 10);
        num /= 10;
    }

    if (original == reverso) {
        printf("O número é um palíndromo.\n");
    } else {
        printf("O número não é um palíndromo.\n");
    }
    return 0;
}
