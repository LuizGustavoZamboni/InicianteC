#include <stdio.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    char nome[50];
    int idade;
    
    printf("Informe o nome do cliente: ");
    scanf("%s",nome);
    
    printf("Qual a idade do cliente: ");
    scanf("%i",&idade);
    
    printf("Sr(a).%s,você tem %i anos.",nome,idade);
    
}
