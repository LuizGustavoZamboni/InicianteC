#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    
    int idade;
    char classe[20];
    
    printf("Informe sua idade:\n");
    scanf("%i",&idade);
    
    if(idade<16){
    	strcpy(classe,"N�o eleitor");
	}else if(idade>=18&&idade<=70){
		strcpy(classe,"Eleitor obrigat�rio");
	}else{
		strcpy(classe,"Eleitor facultativo");
	}
	printf("%s\n",classe);

    system("pause");
}
