#include <stdint.h>
#include <stdio.h>

int main()
{

    int item;

    printf("|1| CAMISETA|\n");
    printf("|2|  CALCA  |\n");
    printf("|3|  SAPATO |\n");

    printf("\n");
    printf("INFORME O ITEM QUE DESEJAR:");
    scanf("%d", &item);

    system("cls");
    switch (item)
    {
    case 1:
        printf("ITEM DESEJADO FOI\n");
        printf("|1|CAMISETA\n");
        printf("TOTAL A PAGAR R$ 78.90\n");
        break;
    case 2:
        printf("ITEM DESEJADO FOI\n");
        printf("|2|CALCA\n");
        printf("TOTAL A PAGAR R$ 100.90\n");
        break;
    case 3:
        printf("ITEM DESEJADO FOI\n");
        printf("|3|SAPATO\n");
        printf("TOTAL A PAGAR R$ 200.00\n");
        break;
    default:
        printf("CODIGO DIGITADO INVALIDO");
        break;
    }

    return 0;
}
