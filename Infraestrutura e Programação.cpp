#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
		char codigo;
    int qtdI=0,qtdP=0;
    do{
			printf("Informe qual sua preferencia:\nI - Infraestrutura\nP - Programa��o\nE - Encerrar\n");
			scanf("%c",&codigo);
	    system("cls");
	    switch(codigo){
			 case'I':
			 case'i':
			 	 qtdI++;
    		 break;
   		 case'P':
			 case'p':
			 	 qtdP++;
    		 break;
   		 case'E':
    	 case'e':
	 			 printf("Programa encerrado!");
    		 break;
   		 default:
	 			 printf("Op��o Invalida");
    		 break;
		 }
   	getchar();
	}while(codigo!='E'&&codigo!='e');
	printf("\nA preferencia foi de:\nI - Infraestrutura:%i\nP - Programa��o:%i\n",qtdI,qtdP);
	
	system("pause");
}
