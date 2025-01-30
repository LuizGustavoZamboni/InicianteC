#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    int tabuada[10][10],num1,num2,i,j;
    printf("Informe o 1º numero:\n");
    scanf("%i",&num1);
    printf("Informe o 2º numero:\n");
    scanf("%i",&num2);
    for(i=0;i<10;i++){
    	for(j=0;j<10;j++){
    		tabuada[i][j]=(i+1)*(j+1);
    		printf("%i",tabuada[i][j]);
    		if(num1-1==i&&num2-1==j){
    			printf("*");
				}
				printf("\t");
			}
			printf("\n");
		}
		printf("O resutado é %i\n",tabuada[num1-1][num2-1]);
    system("pause");
}
