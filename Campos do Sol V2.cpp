#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    float rendaM;
		int qtdMaior=0,qtdMenor=0;
		printf("Bem vindo a pesquisa sobre renda na cidade Campos do Sol:\n");
		do{
			system("cls");
			printf("Informe a renda mensal(em reais):\nR$:");
			scanf("%f",&rendaM);
			if(rendaM>=3000){
				qtdMaior++;
			}else{
				qtdMenor++;
			}
		}while(rendaM!=0);
		printf("\nA quantidade de familias com renda mensal maior de 3000 é: %i\nA quantidade de familias com renda mensal menor que 3000 é:%i\n",qtdMaior,qtdMenor);
	
    system("pause");
}
