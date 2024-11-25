#include <stdio.h>

int main() {
    int num, original, reverso = 0;
    printf("Digite um número: ");
    scanf("%d", &num);
    original = num;

    while (num != 0) {
        reverso = reverso * 10 + num % 10;
        num /= 10;
    }
    if (original == reverso) {
        printf("O número é um palíndromo.\n");
    } else {
        printf("O número não é um palíndromo.\n");
    }
    return 0;
}
