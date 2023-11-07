#include <stdint.h>
#include <stdio.h>


int main (){

int codigo;

printf("|1| INICIAR JOGO\n" );
printf("|2| CARREGAR JOGO\n");
printf("|3| CONFIGURACOES\n");
printf("\n");
printf("codigo:");
scanf ("%d",&codigo);



switch (codigo)
{
case 1:
    printf("INICIALIZANDO JOGO..........");
    break;
case 2:
printf("LOANDING..........");
break;
case 3:
printf("|CONFIGURACOES DE ACESSIBILIDADE|\n");
printf("|CONFIGURACOES DE SENSIBILIDADE |\n");
printf("|CONFIGURACOES DE AUDIO E VIDEO |\n");
printf("|     CONFIGURACOES DE TELA     |\n");
default:
    break;
}





    return 0;
}