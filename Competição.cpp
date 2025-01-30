#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    int i,j;
		float aux,tempo[10];
		printf("Digite o tempo de cada aluno terminaram:\n");
    for(i=0;i<10;i++){
    	printf("%i° Aluno:\n",i+1);
   		scanf("%f",&tempo[i]);
   		system("cls");
		}
		//ordenar o vetor
		//primeiro vetor - quantidade de vezes - 10
		for(i=1;i<=10;i++){
			//segundo vetor - comparação
			for(j=0;j<9;j++){
				if(tempo[j]>tempo[j+1]){
					aux=tempo[j];
					tempo[j]=tempo[j+1];
					tempo[j+1]=aux;
				}
				printf("%.1f\t",tempo[j]);
			}
			printf("\n");
		}
    system("pause");
}
