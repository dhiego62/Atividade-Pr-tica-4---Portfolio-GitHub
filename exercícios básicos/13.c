#include <stdio.h>

int main() {
    int num, soma = 0;

    printf("Digite cinco números inteiros:\n");
    
    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &num);
        
        if (num % 2 == 0) {
            soma += num;
        }
    }
    
    printf("A soma dos números pares é: %d\n", soma);
    
    return 0;
}
