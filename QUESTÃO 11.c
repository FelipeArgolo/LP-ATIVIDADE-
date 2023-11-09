#include <stdio.h>
#include <stdlib.h>

int main (){

int codigo;

do
{
    printf("DIGITE O CODIGO DE ACESSO:");
    scanf("%d",&codigo);

    if (codigo != 10090)
    {
        printf ("\n");
        printf("CODIGO INVALIDO:\n");
        printf ("\n");
    }
    

} while (codigo != 10090);

printf ("ACESSO CONFIRMADO\n");
printf ("!Bem vindo Felipe!\n");







    return 0;
}