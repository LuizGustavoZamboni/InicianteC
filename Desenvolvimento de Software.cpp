#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    int tipo;
    float pagamento, horas;
    char nomeColaborador[30];
    printf("Informe o nome do desenvolvedor:\n");
    gets(nomeColaborador);
    printf("Informe a quantidade de horas trabalhadas:\n");
    scanf("%f",&horas);
    printf("Escolha o tipo de serviço:\n1 - Desenvolvimento Web\n2 - Desenvolvimento Mobile\n3 - Desenvolvimento Backed\n4 - Testes e Qualidade\n");
    scanf("%i",&tipo);
    switch(tipo){
    	case 1:
    		pagamento=horas*120;
    		break;
    	case 2:
    		pagamento=horas*150;
    		break;
    	case 3:
    		pagamento=horas*130;
    		break;
    	case 4:
    		pagamento=horas*100;
    		break;
    	default:
    		printf("Opção Invalida!");
    		return 0;
	}
	if (pagamento>0){
		printf("%s - O valor a ser pago é %.2f\n",nomeColaborador,pagamento);
	}
	
    system("pause");
}
