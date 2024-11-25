#include <stdio.h>

int main() {
    int num, i = 2, primo = 1;
    printf("Digite um número: ");
    scanf("%d", &num);

    while (i < num) {
        if (num % i == 0) {
            primo = 0;
            break;
        }
        i++;
    }

    if (num <= 1) primo = 0;
    if (primo) {
        printf("%d é primo.\n", num);
    } else {
        printf("%d não é primo.\n", num);
    }
    return 0;
}
