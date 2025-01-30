#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    
    float salario,salarioFinal;
    char nivel[10];//string
    int classe;
    
    printf("Informe o valor do salario: ");
    scanf("%f",&salario);
    printf("Informe a classe do jogador\n1 - Tsktsktsk\n2 - Te cuida\n3 - Regular\n4 - Bom\n5 - Excelente\n");
    scanf("%i",&classe);
    
    switch(classe){
    	case 1:
			salarioFinal=salario+salario*0;
			strcpy(nivel,"Tsktsktsk");
			break;
		case 2:
			salarioFinal=salario+salario*0.05;
			strcpy(nivel,"Te Cuida");
			break;
		case 3:
			salarioFinal=salario+salario*0.30;
			strcpy(nivel,"Regular");
			break;
		case 4:
			salarioFinal=salario+salario*0.75;
			strcpy(nivel,"Bom");
			break;
		case 5:
    		salarioFinal=salario+salario*1;
    		strcpy(nivel,"Excelente");
			break;
		default:
			printf("Opção Invalida");
			return 0;
	}
	printf("O nivel do jogador é: %s, \nO salario dele será: %.2f\n",nivel,salarioFinal);
    
    system("pause");
}
