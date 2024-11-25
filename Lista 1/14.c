#include <stdio.h>

int main() {
    int num1, num2, diferenca;
    
    printf("Digite dois numero inteiro: ");
    scanf("%d %d", &num1, &num2);
    
    if(num1 > num2 ){
        printf("%d é maior que %d\n", num1, num2);
        diferenca = num1 - num2;
    } else {
        printf("%d é maior que %d\n", num2, num1);
        diferenca = num2 - num1;
    }
  
    printf("Diferenca entre ambos: %d\n", diferenca);
    return 0;
}