#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    float peso, pesoMax, pesoTotal=0;
    printf("Informe o peso maximo permitido:\n");
    scanf("%f",&pesoMax);
    do{
    	printf("Informe o peso do veiculo:\n");
    	scanf("%f",&peso);
    	pesoTotal+=peso;
    	printf("Peso parcial: %.3f\n",pesoTotal);
	}while(pesoTotal<=pesoMax);
	if(pesoTotal>pesoMax){
		system("cls");
		pesoTotal-=peso;
		printf("Retorne o último veiculo \n");
		printf("O peso final %.3f\n",pesoTotal);
	}
    system("pause");
}
