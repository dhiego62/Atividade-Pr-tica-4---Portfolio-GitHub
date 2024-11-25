#include <stdio.h>

int main() {
    int senha;
    do {
        printf("Digite a senha de 4 dígitos: ");
        scanf("%d", &senha);
        if (senha != 1234) {
            printf("ACESSO NEGADO\n");
        }
    } while (senha != 1234);
    printf("ACESSO PERMITIDO!\n");
    return 0;
}
