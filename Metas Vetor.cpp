#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    int qtdVendedores,i;
    printf("Informe a quantidade de vendedores:\n");
    scanf("%i",&qtdVendedores);
    float meta, valorVenda[qtdVendedores],valorMaiorVenda=0;
    char nome[qtdVendedores][30],nomeMaiorVenda[30];
    printf("Qual a meta do mês?");
    scanf("%f",&meta);
    printf("Digite as informações dos vendedores\n");
    getchar();
    for(i=0;i<qtdVendedores;i++){
    	printf("Nome do %iº vendedor:\n",i+1);
    	gets(nome[i]);
    	printf("Valor de venda:\n");
    	scanf("%f",&valorVenda[i]);
    	getchar();
    	if(valorVenda[i]>valorMaiorVenda){
    		valorMaiorVenda=valorVenda[i];
    		strcpy(nomeMaiorVenda,nome[i]);
			}
		}
		printf("\n========== Relatório Final ==========\n");
		printf("NOME \tVALOR\tRESULTADO\n");
		for(i=0;i<qtdVendedores;i++){
			printf("%s\t%.2f\t",nome[i],valorVenda[i]);
			if(valorVenda[i]>=meta){
				printf("Atingiu a meta\n");
			}else{
				printf("\n");
			}
		}
		printf("O vendedor com a maior venda foi: %s com %.2f\n",nomeMaiorVenda,valorMaiorVenda);
    system("pause");
}
