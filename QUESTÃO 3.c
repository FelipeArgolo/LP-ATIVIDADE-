#include <stdint.h>
#include <stdlib.h>

int main()
{

    float nota;

    printf("digite sua nota:");
    scanf("%f", &nota);

    if (nota >= 9)
    {
        printf("nota excelente:");
    }
    else if (nota >= 7)
    {
        printf("nota boa:");
    }
    else if (nota >= 5)
    {
        printf("nota razoavel");
    }
    else
    {

        printf("nota ruim");
    }

    return 0;
}