#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    int kmH;
    float multa;
    printf("Informe a velocidade registrada(em kh/h):\n");
    scanf("%i",&kmH);
    if(kmH>80){
    	multa=kmH*2.5;
    	printf("Multa aplicada: excesso de velocidade.\nValor da multa:\nR$%.2f\n",multa);
		}else{
			printf("Velocidade dentro do limite permitido\n");
		}
		
    system("pause");
}
