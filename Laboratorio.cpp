#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    int i;
    float precoA[10],precoN[10];
    printf("Preparando para atualização de preços\n");
    for(i=0;i<10;i++){
    	printf("Informe o valor do %iº produto:\n",i+1);
    	scanf("%f",&precoA[i]);
    	precoN[i]=precoA[i]+(precoA[i]*0.175);
		}
		system("cls");
		printf("===PREÇOS ATUALIZADOS===\nPRODUTO\t\tANTIGO\tNOVO\n");
		for(i=0;i<10;i++){
			printf("Produto %i\t%.2f\t%.2f\n",i+1,precoA[i],precoN[i]);
		}
    system("pause");
}
