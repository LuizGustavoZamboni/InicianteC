#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    float mensal;
    int qtdMatri,curso;
    char nomeCurso[7];
    printf("Bem vindo a escola de Arte Viva\n");
    printf("Informe quantas pessoas serão matriculas:\n");
    scanf("%i",&qtdMatri);
		printf("\nInforme qual curso deseja fazer\n1 - Pintura\n2 - Dança\n3 - Música\n4 - Teatro\n");
    scanf("%i",&curso);
    switch(curso){
    	case 1:
    		strcpy(nomeCurso,"Pintura");
    		mensal=qtdMatri*250;
    		break;
   		case 2:
   			strcpy(nomeCurso,"Dança");
   			mensal=qtdMatri*200;
   			break;
 			case 3:
 				strcpy(nomeCurso,"Música");
 				mensal=qtdMatri*300;
 				break;
			case 4:
				strcpy(nomeCurso,"Teatro");
				mensal=qtdMatri*220;
				break;
			default:
				printf("Opção inválida. Escolha um número de 1 a 4");
				break;
		}
		printf("Serão %i pessoas participando do curso de %s com mensalidade no valor de %.2f\n",qtdMatri,nomeCurso,mensal);
    
    system("pause");
}
