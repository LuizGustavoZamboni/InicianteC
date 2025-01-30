#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    int habitantes, regiao,criterio;
    
    printf("Informe a quantidade de habitantes\n");
    scanf("%i",&habitantes);
    printf("Informe qual região\n1 - Sudeste\n2 - Sul\n");
    scanf("%i",&regiao);
    switch(regiao){
    	case 1:
    		criterio = 100000;
    		break;
   		case 2:
   			criterio = 20000;
   			break;
		default:
			printf("Opção Invalida!");
			return 0;	
	}if(criterio<habitantes){
		printf("Está apto para ser emancipado!\n");
	}else{
		printf("Não está apto para ser emancipado!\n");
	}

    system("pause");
}
