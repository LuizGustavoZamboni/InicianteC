#include <stdio.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    float valor;
    char nome[40], cpf[15];
    
    printf("Informe o seu nome: ");
    gets(nome);
    printf("Informe seu CPF: ");
    scanf("%s",&cpf);
    printf("Informe o valor do recolhimento nota paraná: ");
    scanf("%f",&valor);
    printf("Sr(a)%s(CPF - %s) - R$%.2f",nome,cpf,valor);
    
}
