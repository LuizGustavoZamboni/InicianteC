#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    float precoUnit, precoTotal = 0;
    int qtde,qtdeTotal = 0;
    
    printf("Bem-vindo ao Balanço do Supermercado BalacoBaco\n");
    
    do {
    	printf("Digite a quantidade do item ou zero para continuar:\n");
    	scanf("%i",&qtde);
    	
    	if(qtde>0){
    		printf("Informe o preço unitario R$:\n");
    		scanf("%f",&precoUnit);
    	}
    	qtdeTotal += qtde;// qtdeTotal = qtdeTotal + qtde
    	precoTotal += qtde * precoUnit;
    	
	}while(qtde>0);
	system("cls");
	printf("==========RELATORIO FINAL DO BALANÇO==========\n");
	printf("Qtde Total: %i\tValor Total: %.2f\n",qtdeTotal,precoTotal);
	
    system("pause");
}
