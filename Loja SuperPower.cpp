#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    float vendas, comissao;
    char codigo;
    
    printf("Informe quanto foi vendido:\n");
    scanf("%f",&vendas);
    printf("Informe em qual o setor dejesa fazer o calculo:\nR - Roupas\nC - Calçados\nA - Acessórios\n");
    scanf(" %c",&codigo);
    switch(codigo){
    	case 'R':
   		case 'r':
    		comissao = vendas*0.04;
    		break;
   		case 'C':
		case 'c':
   			comissao = vendas*0.03;
   			break;
		case 'A':
		case 'a':
			comissao = vendas*0.07;
			break;
		default:
			printf("Opção Invalida!");
			return 0;
	}
	printf("O valor de sua comissão é %.2f\n",comissao);
	
    system("pause");
}
