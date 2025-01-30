#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
//void - vazio - não retorna nenhum valor
void menu(){
	printf("LABORÁTORIO DE INFORMATICA \n");
	printf("LAB1 \t A até D\n");
	printf("LAB2 \t E até J\n");
	printf("LAB3 \t K até M\n");
	printf("LAB4 \t N até R\n");
	printf("LAB5 \t S até Z\n");
}
main()
{
    setlocale(LC_ALL,"Portuguese");
    char nome[20];
    menu();
    printf("Qual o nome do aluno?\n");
    gets(nome);
    strupr(nome);//maiúsculo - upercase
    if(nome[0]>='A'&&nome[0]<='D'){
    	printf("%s - Laboratório 1\n",nome);
		}else if(nome[0]>='E'&&nome[0]<='J'){
			printf("%s - Laboratório 2\n",nome);
		}else if(nome[0]>='K'&&nome[0]<='M'){
			printf("%s - Laboratório 3\n",nome);
		}else if(nome[0]>='N'&&nome[0]<='R'){
			printf("%s - Laboratório 4\n",nome);
		}else if(nome[0]>='S'&&nome[0]<='Z'){
			printf("%s - Laboratório 5\n",nome);
		}else{
			printf("ERRO ==> Caracter não previsto no ensalamento\n");
		}
    
    system("pause");
}
