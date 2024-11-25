#include <stdio.h>

int main() {

    int num1, num2;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("O maior núemro digitado é (%d), e o menor é (%d)", num1, num2);
    } 
    else if (num1 < num2) {
        printf("O maior núemro digitado é (%d), e o menor é (%d)", num2, num1);
    }
    else {
        printf("Os dois números digitados são iguais");
    }
    
    return 0;
}