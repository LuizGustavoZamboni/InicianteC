#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    int numSecreto, numDigitado, i;
    srand(time(NULL));
    numSecreto = rand() % 10;
    
    for(i=1;i<=4;i++){
    	printf("Qual o numero de %i� palpite:\n",i);
    	scanf("%i",&numDigitado);
    	if(numDigitado<numSecreto){
    		printf("Numero secreto � Maior\n");
		}else if(numDigitado>numSecreto){
			printf("Numero secreto � Menor\n");
		}else{
			printf("Parab�ns! Voc� ganhou o pr�mio!");
			break;
		}
		system("pause");
		system("cls");
	}
	printf("\nN�mero secreto: %i\n",numSecreto);

    system("pause");
}
