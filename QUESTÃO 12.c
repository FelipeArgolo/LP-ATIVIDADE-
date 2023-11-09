#include <stdio.h>
#include <stdlib.h>

int main()
{

    int quantidade, soma = 0, nota, i;
    float media;

    printf("QUANTAS NOTAS IRA INSERIR ?:");
    scanf("%d", &quantidade);

    for (i = 1; i <= quantidade; i++)
    {
        printf("\n");
        printf("%d NOTA:", i);
        scanf("%d", &nota);
        printf("\n");

        soma = soma + nota;
    }

    media = soma / quantidade;

    printf("\n");
    printf("MEDIA DAS NOTAS: %.2f \n", media);

    return 0;
}