#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    float peso[7],pesoMaior=0,pesoMenor=999,pesoTot=0,media;
    int i;
    
    printf("Digite as informações do paciente:\n");
    for(i=0;i<7;i++){
    	printf("%i° paciente: ",i+1);
    	scanf("%f",&peso[i]);
    	pesoTot=pesoTot+peso[i];
    	if(peso[i]>pesoMaior){
    		pesoMaior=peso[i];
			}
			if(peso[i]<pesoMenor){
				pesoMenor=peso[i];
			}
		}
		media=pesoTot/7;
		printf("A media de peso foi %.2f\nO maior peso foi: %.2f\nO menor peso foi:%.2f\n",media,pesoMaior,pesoMenor);
    
    system("pause");
}
