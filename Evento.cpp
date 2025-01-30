#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    int qtdConvite;
	float valorTotal;
    char categoria[17];
    printf("Bem vindo ao Grande Encontro do Futuro!\nQuantos convites deseja comprar:\n");
    scanf("%i",&qtdConvite);
	if(qtdConvite==1){
		valorTotal=50;
		strcpy(categoria,"Combo Individual");
	}else if(qtdConvite<=3){
		valorTotal=qtdConvite*45,00;
		strcpy(categoria,"Combo Grupo");
	}else if(qtdConvite<=5){
		valorTotal=qtdConvite*40,00;
		strcpy(categoria,"Combo Time");
	}else{
		valorTotal=qtdConvite*35,00;
		strcpy(categoria,"Combo Bonde");
	}
	system("cls");
	printf("Sua categoria é:%s \nO valor total a se pagar é:$%.2f\n",categoria,valorTotal);
	
    system("pause");
}
