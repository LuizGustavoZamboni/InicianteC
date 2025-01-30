#include <stdio.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    char depto[50], respons[50];
    int qtdeKw;
    float valor;
    
    printf("Informe qual departamento: ");
    gets(depto);
    printf("Informe quem é o responsavel pelo departamento: ");
    gets(respons);
    printf("Informe a quantidade de quilowatts: ");
    scanf("%i",&qtdeKw);
    printf("Informe o valor a ser pago: ");
    scanf("%f",&valor);
    printf("%s(%s) - %i Kw - R$%.2f",depto,respons,qtdeKw,valor);
    
}
