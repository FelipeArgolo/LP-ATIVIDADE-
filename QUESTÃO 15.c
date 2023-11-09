#include <stdio.h>

int main() {
    int opcao;
    double valor, resultado;

    while (1) {
        printf("Escolha a conversao desejada:\n");
        printf("1. Quilometros para Milhas\n");
        printf("2. Celsius para Fahrenheit\n");
        printf("3. MILHAS PARA Quilometros\n");
        printf("4. Fahrenheit para Celsius\n");
        printf("0. Sair do programa\n");
        printf("Digite o numero da opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            break;  // Sair do programa quando o usuário digitar 0.
        }

        switch (opcao) {
            case 1:
                printf("Digite o valor em Quilometros: ");
                scanf("%lf", &valor);
                resultado = valor * 0.621371;
                printf("%.2lf Quilometros equivalem a %.2lf Milhas.\n", valor, resultado);
                break;
            case 2:
                printf("Digite a temperatura em Celsius: ");
                scanf("%lf", &valor);
                resultado = (valor * 9/5) + 32;
                printf("%.2lf Celsius equivalem a %.2lf Fahrenheit.\n", valor, resultado);
                break;
            case 3:
               printf("Digite o valor em Milhas: ");
               scanf("%lf", &valor);
               resultado = (valor /0.621371);
               printf("%.2lf Milhas equivalem a %.2lf Quilometros.\n", valor, resultado);
               break;
             case 4:
               printf("Digite a temperatura em Fahrenheit: ");
               scanf("%lf", &valor);
               resultado = (valor - 32) / 1.8  ;
               printf("%.2lf Fahrenheit equivalem a %.2lf Celsius.\n", valor, resultado);
               break;
            default:
                printf("Opção invalida. Tente novamente.\n");
        }
    }

    return 0;
}