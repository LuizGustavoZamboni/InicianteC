#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
//void - vazio - n�o retorna nenhum valor
void menu(){
	printf("LABOR�TORIO DE INFORMATICA \n");
	printf("LAB1 \t A at� D\n");
	printf("LAB2 \t E at� J\n");
	printf("LAB3 \t K at� M\n");
	printf("LAB4 \t N at� R\n");
	printf("LAB5 \t S at� Z\n");
}
main()
{
    setlocale(LC_ALL,"Portuguese");
    char nome[20];
    menu();
    printf("Qual o nome do aluno?\n");
    gets(nome);
    strupr(nome);//mai�sculo - upercase
    if(nome[0]>='A'&&nome[0]<='D'){
    	printf("%s - Laborat�rio 1\n",nome);
		}else if(nome[0]>='E'&&nome[0]<='J'){
			printf("%s - Laborat�rio 2\n",nome);
		}else if(nome[0]>='K'&&nome[0]<='M'){
			printf("%s - Laborat�rio 3\n",nome);
		}else if(nome[0]>='N'&&nome[0]<='R'){
			printf("%s - Laborat�rio 4\n",nome);
		}else if(nome[0]>='S'&&nome[0]<='Z'){
			printf("%s - Laborat�rio 5\n",nome);
		}else{
			printf("ERRO ==> Caracter n�o previsto no ensalamento\n");
		}
    
    system("pause");
}
