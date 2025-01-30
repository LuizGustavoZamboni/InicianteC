#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    
    float salarioMin,banhoTosa,banho,valorTotal;
    int quantidade,codigo;
    
    printf("Informe o tipo de serviço:\n1 - Banho\n2 - Banho e Tosa:\n");
    scanf("%i",&codigo);
    printf("Informe a quantidade:\n");
    scanf("%i",&quantidade);
    printf("Informe o valor do salario minimo:\n");
    scanf("%f",&salarioMin);
    banhoTosa=salarioMin*0.055;
	switch(codigo){
		case 1:
			banho=banhoTosa/2;
			break;
		case 2:
			banhoTosa=banhoTosa-banhoTosa*0.07;
			break;
		default:
			printf("Opção Invalida!");
			return 0;
	}
	valorTotal=banhoTosa*quantidade+banho*quantidade;
	printf("O valor total é de: %.2f",valorTotal);

    system("pause");
}
