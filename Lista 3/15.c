#include <stdio.h>

int main() {
    int senha;
    while (1) {
        printf("Digite a senha de 4 dígitos: ");
        scanf("%d", &senha);
        if (senha == 1234) {
            printf("ACESSO PERMITIDO!\n");
            break;
        } else {
            printf("ACESSO NEGADO\n");
        }
    }
    return 0;
}
