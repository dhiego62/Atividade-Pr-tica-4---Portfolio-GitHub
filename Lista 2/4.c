#include <stdio.h>

int main() {
    float nota;
    printf("Digite a nota (0 a 10): ");
    scanf("%f", &nota);
    if (nota >= 6)
        printf("Aprovado\n");
    else
        printf("Reprovado\n");
    return 0;
}
