#include<stdio.h>
#include<stdlib.h>

int main(){
    int n = 1, valor;

    printf("Digite um numero:");
    scanf("%d", &valor);

    getchar();

    while (n <= valor)
    {
        printf("\n%d", n);
        n++;
    }
    
    return 0;
}