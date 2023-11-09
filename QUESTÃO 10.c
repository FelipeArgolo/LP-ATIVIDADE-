#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numeroum, numerodois;
    char operacao;
    int resultado;

    printf("DIGITE NUMERO |A| :");
    scanf("%d", &numeroum);

    printf("\n");

    printf("DIGITE NUMERO |B| :");
    scanf("%d", &numerodois);

    printf("\n");

    fflush(stdin);

    printf("ESCOLHA OPERACAO PARA REALIZAR O CALCULO:");
    scanf("%c", &operacao);

    printf("\n");

    switch (operacao)
    {
    case '+':
        resultado = numeroum + numerodois;
        break;
    case '-':
        resultado = numeroum - numerodois;
        break;
    default:
        printf("CODIGO INVALIDO");
        break;
    }

    system("cls");

    printf("NUMERO |A|: %d \n", numeroum);
    printf("\n");
    printf("NUMERO |B|: %d \n", numerodois);
    printf("\n");
    printf("OPERACAO ESCOLHIDA: %c \n", operacao);
    printf("\n");
    printf("RESULTADO: %d ", resultado);

    return 0;
}
