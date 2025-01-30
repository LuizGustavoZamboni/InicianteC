#include <stdio.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    char nome[50];
    
    printf("Informe o nome do aluno: ");
    gets(nome);
    
    printf("A primeira letra do nome é: %c",nome[0]);
    
}
