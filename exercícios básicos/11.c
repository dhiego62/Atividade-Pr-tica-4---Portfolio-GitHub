#include <stdio.h>

int main() {
    int i, j, temp;

    printf("Digite o primeiro número: ");
    scanf("%d", &i);
    
    printf("Digite o segundo número: ");
    scanf("%d", &j);

    temp = i;
    i = j;
    j = temp;

    printf("Após a troca:\n");
    printf("Primeiro número: %d\n", i);
    printf("Segundo número: %d\n", j);

    return 0;
}
