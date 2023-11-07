#include <stdint.h>
#include <stdio.h>

int main (){

int idade;

printf("digite sua idade:");
scanf("%d",&idade);

if (idade >= 18)
{
    printf("acesso permitido");
}
else
{
printf ("acesso negado");

}



return 0;
}