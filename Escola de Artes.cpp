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
    printf("Informe quantas pessoas ser�o matriculas:\n");
    scanf("%i",&qtdMatri);
		printf("\nInforme qual curso deseja fazer\n1 - Pintura\n2 - Dan�a\n3 - M�sica\n4 - Teatro\n");
    scanf("%i",&curso);
    switch(curso){
    	case 1:
    		strcpy(nomeCurso,"Pintura");
    		mensal=qtdMatri*250;
    		break;
   		case 2:
   			strcpy(nomeCurso,"Dan�a");
   			mensal=qtdMatri*200;
   			break;
 			case 3:
 				strcpy(nomeCurso,"M�sica");
 				mensal=qtdMatri*300;
 				break;
			case 4:
				strcpy(nomeCurso,"Teatro");
				mensal=qtdMatri*220;
				break;
			default:
				printf("Op��o inv�lida. Escolha um n�mero de 1 a 4");
				break;
		}
		printf("Ser�o %i pessoas participando do curso de %s com mensalidade no valor de %.2f\n",qtdMatri,nomeCurso,mensal);
    
    system("pause");
}
