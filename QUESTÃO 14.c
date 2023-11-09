#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero;
    float par, impar;
    float somapar, somaimpar;
    float mediapar, mediaimpar;

    do
    {

        printf("DIGITE UM NUMERO :");
        scanf("%d", &numero);
        printf("\n");

        if (numero % 2 == 0)
        {
            par++;

            somapar = somapar + numero;
        }
        else if (numero % 2 == 1)
        {
            impar++;

            somaimpar = somaimpar + numero;
        }

    } while (numero >= 0);

    mediapar = somapar / par;
    mediaimpar = somaimpar / impar;

    printf("\n");

    printf("TOTAL PAR: %.1f \n", mediapar);

    printf("TOTAL IMPAR: %.1f \n", mediaimpar);

    return 0;
}
