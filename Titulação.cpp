#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    float salario;
    int idade;
    char nome[50], titulacao[20];
    
    printf("Informe o seu nome?\n ");
    gets(nome);
    printf("Informe sua titulação?\n ");
    scanf("%s",&titulacao);
    printf("Informe a idade?\n ");
    scanf("%i",&idade);
    printf("Informe o seu salário?\n ");
    scanf("%f",&salario);
    system("cls");
    printf("%s(%s)%i anos - R$ %.2f",nome,titulacao,idade,salario);

}
