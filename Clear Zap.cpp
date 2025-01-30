#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    float qtdeHrCrist, qtdeHrFaxina, qtdeHrDede,mediaGeral;
    
    printf("Informe a quantidade de horas de faxina em residencias/escritorios:\n");
    scanf("%f",&qtdeHrFaxina);
    printf("Infrome a quantidade de horas de cristalização de vitrines:\n");
    scanf("%f",&qtdeHrCrist);
    printf("Informe a quantidade de horas de dedetização\n");
    scanf("%f",&qtdeHrDede);
    mediaGeral=qtdeHrFaxina*20+qtdeHrCrist*45+qtdeHrDede*37.5/(20+45+37.5);
    printf("Media geral recebida de: %.2f\n",mediaGeral);

    system("pause");
}
