#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    float valor;
    int quantidade, prato;
    char pedido[11];
    
	printf("Informe qual o prato desejado:\n1 - Ravioli – Camarões com peixe desfiado\n2 - Rondelli - 4 queijos\n3 - Sacotini – Ricota com espinafre\n4 - Sorrentino – Bacalhau com azeitonas pretas\n");
    scanf("%i",&prato);
    printf("Informe quantos pratos:\n");
    scanf("%i",&quantidade);
    switch(prato){
    	case 1:
    		valor=63.50*quantidade;
    		strcpy(pedido,"Ravioli");
    		break;
   		case 2:
   			valor=48.50*quantidade;
   			strcpy(pedido,"Rondelli");
   			break;
		case 3:
			valor=57.90*quantidade;
			strcpy(pedido,"Sacotini");
			break;
		case 4:
			valor=55.50*quantidade;
			strcpy(pedido,"Sorrentino");
			break;
		default:
			printf("Prato Invalida!");
			return 0;	
	}
	printf("O pedido é de %i %s custará: %.2f\n",quantidade,pedido,valor);

    system("pause");
}
