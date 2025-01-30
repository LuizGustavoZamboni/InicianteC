#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    float bonificacao;
    int anos;
    printf("Digite a quantidade de tempo de serviço:");
    scanf("%i",&anos);
    if(anos<=5){
    	bonificacao=500;
	}else if(anos<=10){
		bonificacao=700;
	}else if(anos<=15){
		bonificacao=900;
	}else if(anos<=20){
		bonificacao=1100;
	}else{
		bonificacao=1300;
	}
	printf("Sua bonificação é de %.2f\n",bonificacao);
	
    
	
    system("pause");
}
