#include <stdio.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    char cidade[50], mes[10];
    int ano, dia;
    
    printf("Informe o nome da cidade: ");
    gets(cidade);
    printf("Informe qual o dia: ");
    scanf("%i",&dia);
    printf("Informe qual o més: ");
    scanf("%s",mes);
    printf("Informe qual o ano: ");
    scanf("%i",&ano);
    printf("%s,%i de %s de %i.",cidade,dia,mes,ano);
    
}
