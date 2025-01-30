#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    char nomeDisci[50];
    int disciID,qtMinAluno,qtMaxAluno,qtHoras;
    
    printf("Informe o ID da disciplina:\n");
    scanf("%i",&disciID);
    getchar();
    printf("Informe qual o nome da disciplina:\n");
    gets(nomeDisci);
    printf("Digite a quantidade de horas da disciplina:\n");
    scanf("%i",&qtHoras);
    printf("Qual a quantidade minima de alunos:\n");
    scanf("%i",&qtMinAluno);
    printf("Qual a quantidade maxima de alunos:\n");
    scanf("%i",&qtMaxAluno);
    if(qtMinAluno>qtMaxAluno){
    	printf("ERRO! Quantidade minima de alunos deve ser menor que a quantidade maxima! \n");
	}else{
		printf("Cadastro realizado com sucesso!\n");
		printf("Disciplina: %s\nID da Disciplina: %i\nQuantidade de Alunos Min: %i Max: %i\nQuantidade de Horas: %i",nomeDisci,disciID,qtMinAluno,qtMaxAluno,qtHoras);
	}

    system("pause");
}
