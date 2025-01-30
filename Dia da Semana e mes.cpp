#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    int indiceSem,indiceMes;
    char diasSemana[7][10],mes[12][10];
    strcpy(diasSemana[0],"Segunda");
    strcpy(diasSemana[1],"Terça");
    strcpy(diasSemana[2],"Quarta");
    strcpy(diasSemana[3],"Quinta");
    strcpy(diasSemana[4],"Sexta");
    strcpy(diasSemana[5],"Sábado");
    strcpy(diasSemana[6],"Domingo");
    strcpy(mes[0],"Janeiro");
    strcpy(mes[1],"Fevereiro");
    strcpy(mes[2],"Março");
    strcpy(mes[3],"Abril");
    strcpy(mes[4],"Maio");
    strcpy(mes[5],"Junho");
    strcpy(mes[6],"Julho");
    strcpy(mes[7],"agosto");
    strcpy(mes[8],"Setembro");
    strcpy(mes[9],"Outubro");
    strcpy(mes[10],"Novembro");
    strcpy(mes[11],"Dezembro");
    do{
    	printf("Informe o dia da semana(1 - 7)\n");
    	scanf("%i",&indiceSem);
    	if(indiceSem>7){
    		system("cls");
    		printf("Opção Invalida!\n");
			}
		}while(indiceSem>7);
		do{
			printf("Informe o mes (1 - 12)\n");
    	scanf("%i",&indiceMes);
    	if(indiceMes){
    		system("cls");
    		printf("Opção Invalida, tente novamente!\n");
			}
		}while(indiceMes>12);
		system("cls");
    printf("Dia da Semana selecionado: %s\nMes selecionado: %s\n",diasSemana[indiceSem-1],mes[indiceMes-1]);
    system("pause");
}
