#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char semana;
    float item;
    float desconto, desconto2;
    float valortotal, valor, valor2, valortotal2;

    fflush(stdin);

    printf("  |   COMPRAS ACIMA DE 100 VC RECEBE UM DESCONTO DE |10|\n");
    printf("  |    CASO A COMPRA SEJA FEITA EM UM DIA DE SEMANA    |\n");
    printf("\n");
    printf("  |   COMPRAS ACIMA DE 100 VC RECEBE UM DESCONTO DE |15|\n");
    printf("  |    CASO A COMPRA SEJA FEITA EM UM FIM DE SEMANA    |\n");
    printf("\n");

    printf("Informe o valor do produto:");
    scanf("%f", &item);
    printf("\n");
    printf("Informe o dia da compra:");
    scanf("%s", &semana);

    switch (semana)
    {
    case "sabado":

        valor = item;
        valortotal = valor * 0.15;
        desconto = valor - valortotal;

        strcpy("total a pagar: %.2f \n", desconto)
        break;
    case "domingo":

        valor = item;
        valortotal = valor * 0.15;
        desconto = valor - valortotal;

        strcpy("total a pagar:  %.2f \n",;
    default:
        printf("valor total a pagar e: R$ ", item);
        break;
    }




valor = item;
    valortotal = valor * 0.15;
    desconto = valor - valortotal;
    return 0;
}