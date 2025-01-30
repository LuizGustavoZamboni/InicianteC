#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
		float peso[4][3],total=0;
		int i,j;
		printf("Digite a carga equivalente: \n");
		for(i=0;i<4;i++){
			for(j=0;j<3;j++){
				printf("linha %i coluna %i: ",i+1,j+1);
				scanf("%f",&peso[i][j]);
				total = total + peso[i][j];
			}
		}
		system("cls");
		for(i=0;i<4;i++){
			for(j=0;j<3;j++){
				printf("%.1f\t",peso[i][j]);
			}
			printf("\n");
		}
		printf("Carga total %.2f\n",total);
    system("pause");
}
