#include <stdio.h>

int main() {

    int num1, num2;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2)
    {
        printf("Maior número digitado foi: %d\n", num1);
    } else if (num2 > num1) {
        printf("Maior número digitado foi: %d\n", num2);
    } else {
        printf("Os dois números digitados são iguais\n");
    }
    
    return 0;
}