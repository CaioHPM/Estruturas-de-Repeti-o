#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    char sexo, olho, cabelo;
    int idade, contadorGeral = 0, contador = 0;
    float salario, porcentagem;

    do
    {
    contadorGeral++;
    fflush(stdin);
        do
        {
            printf("Digite sexo[m/f]:");
            scanf("%c", &sexo);

            fflush(stdin);

            if (sexo != 'm' && sexo != 'f')
            {
                printf("\nOpçao invalida, tente novamente.");
            }
        

        } while (sexo != 'm' && sexo != 'f');

        do
        {
            printf("\nDigite a cor de seu oho[v = verde, a = azul, c = castanho, p = preto]");
            scanf("%c", &olho);

            fflush(stdin);

            if (olho != 'a' && olho != 'v' && olho != 'p' && olho != 'c')
            {
                printf("\nOpçao invalida, tente novamente.");
            }


        } while (olho != 'a' && olho != 'v' && olho != 'c' && olho != 'p');

        do
        {
            printf("\nDigite a cor do seu cabelo[l = loiro, c = castanho, p = preto, r = ruivo]:");
            scanf("%c", &cabelo);

            fflush(stdin);

            if (cabelo != 'p' && cabelo != 'l' && cabelo != 'c' && cabelo != 'r')
            {
                printf("\nOpçao invalida, tente novamente.");
            }


        } while (cabelo != 'l' && cabelo != 'c' && cabelo != 'r' && cabelo != 'p');
        
        do
        {
            printf("\nDigite o seu salario:");
            scanf("%f", &salario);

            getchar();

            if (salario < 0)
            {
                printf("\nOpçao invalida, tente novamente.");
            }


        } while (salario < 0);

        do
        {
            printf("\nDigite sua idade:");
            scanf("%d", &idade);

            getchar();

            if (idade < 10 || idade > 100)
            {
                printf("\nOpçao invalida, tente novamente.");
            }
        } while (idade < 10 || idade > 100);

    if (sexo == 'f' && (idade >= 18 || idade <= 35) && olho == 'c' && cabelo == 'c')
    {
        contador++;
    }
   
    printf("\nCaso queira sair digite -1, se não, aperte qualquer outra tecla.");
    scanf("%d", &idade);

    } while (idade != -1);

    porcentagem = (100 * contador) / contadorGeral;

    printf("a porcentagem e %.1f", porcentagem);

    return 0;
}
