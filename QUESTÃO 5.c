#include <stdio.h>
#include <stdlib.h>

int main()
{

    int idioma;

    printf("\n");
    printf("|1| INGLES\n");
    printf("|2| ESPANHOL\n");
    printf("|3| FRANCES\n");
    printf("\n");

    printf("digite o idioma que deseja:");
    scanf("%d", &idioma);

    system("cls");
    switch (idioma)
    {
    case 1:
        printf("\n");
        printf("idioma selecionado |INGLES|");
        printf("\n");
        printf("WELCOME");
        break;
    case 2:
        printf("\n");
        printf("idioma selecionado |ESPANHOL|");
        printf("\n");
        printf("BIENVENIDO");
        break;
    case 3:
        printf("\n");
        printf("idioma selecionado |FRANCES|");
        printf("\n");
        printf("ACCUEILLIR");
        break;
    default:
        printf("CODIGO DIGITADO INVALIDO");
        break;
    }

    return 0;
}