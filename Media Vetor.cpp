#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    int qtdAluno,i;
    printf("Quantos alunos est�o presentes?\n");
    scanf("%i",&qtdAluno);
    char nome[qtdAluno][30],situacao[qtdAluno][11];
    float media[qtdAluno],nota1,nota2;
    printf("Digite as informa��es dos alunos\n");
    getchar();
    for(i=0;i<qtdAluno;i++){
    	printf("Nome %i� aluno: ",i+1);
    	gets(nome[i]);
    	printf("1� Nota: ");
    	scanf("%f",&nota1);
    	printf("2� Nota: ");
    	scanf("%f",&nota2);
    	media[i]=(nota1+nota2)/2;
    	if(media[i]>=7){
    		strcpy(situacao[i],"Aprovado");
			}else{
				strcpy(situacao[i],"Reprovado");
			}
			getchar();
		}
		system("cls");
		printf("\n==========BOLETIM==========\n");
		printf("NOME \tM�DIA\tSITUA��O\n");
		for(i=0;i<qtdAluno;i++){
			printf("%s\t",nome[i]);
			if(strlen(nome[i])<4){
				printf("\t");
			}
			printf("\t%.2f \t %s\n",media[i],situacao[i]);
		}
	
    system("pause");
}
