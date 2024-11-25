#include <stdio.h>

int main() {

    int num, dobro, metade;

    printf("Digite um números inteiro: ");
    scanf("%d", &num);
    
    dobro = num * 2;
    metade = num / 2;

    printf("A metade desse número é '%d', e o dobro é '%d'", metade, dobro);

    return 0;
}