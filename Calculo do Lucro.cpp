#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    float custoProducao,valorTotal,lucro;
    printf("Bem vindo a loja de Espetinhos 1000 Delicias!\nInforme o valor total do custo de produ��o:\n");
    scanf("%f",&custoProducao);
    printf("Informe o valor total da venda:\n");
    scanf("%f",&valorTotal);
    lucro=valorTotal-custoProducao;
    system("cls");
    printf("O lucro foi de:\n$%.2f\n",lucro);
    
    if(lucro>0){
    	printf("Voc� obteve lucro!\n");
	}else if(lucro<0){
		printf("Voc� obteve prejuizo!\n");
	}else{
		printf("N�o obteve lucro, nem prejuizo\n");
	}
	
    system("pause");
}
