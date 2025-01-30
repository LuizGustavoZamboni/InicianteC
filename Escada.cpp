#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    float alturaEscada, alturaDegraus;
    int qtdeDegraus, alturaEscadaInt, alturaDegrausInt;
    
    printf("Informe a altura do degraus em metros(m): ");
    scanf("%f",&alturaDegraus);
    printf("Informe quantos metros(m) de escada: ");
    scanf("%f",&alturaEscada);
    qtdeDegraus = alturaEscada/alturaDegraus;
    alturaEscadaInt = alturaEscada*100;
    alturaDegrausInt = alturaDegraus*100;
    
    if (alturaEscadaInt % alturaDegrausInt != 0){
    	qtdeDegraus++;
	}
    printf("A escada terá %i degraus.\n",qtdeDegraus);
    
    
    system("pause");
}
