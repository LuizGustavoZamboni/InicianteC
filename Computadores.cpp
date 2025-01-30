#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    int i, desempenho, maiorDesempenho=0, menorDesempenho=11, total=0;
	float media;
    char modelo[30], modeloMaior[30], modeloMenor[30];
    printf("Digite as informaçõe do computador!\n");
    for(i=1;i<=5;i++){
    	printf("Modelo %iº computador:\n",i);
    	gets(modelo);
    	printf("Desempenho (0 a 10):\n");
    	scanf("%i",&desempenho);
    	total+=desempenho;
    	if(desempenho>maiorDesempenho){
    		maiorDesempenho=desempenho;
    		strcpy(modeloMaior,modelo);
		}
		if(desempenho<menorDesempenho){
			menorDesempenho=desempenho;
			strcpy(modeloMenor,modelo);
		}
		getchar();
	}
	media = total/5;
	system("cls");
	printf("====== RESULTADO DA AVALIAÇÃO======\nMédia de desempenho: %.2f\nMaior desempenho: %s - %i\nMenor desempenho: %s - %i\n",media,modeloMaior,maiorDesempenho,modeloMenor,menorDesempenho);
	
    system("pause");
}
