#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    int idade,gotas;
    float peso,mg;
    
    printf("Informe sua idade:\n");
    scanf("%i",&idade);
    printf("Informe o seu peso:\n");
    scanf("%f",&peso);
    if(idade<5){
    	printf("Não pode tomar medicamento!");
	}else if(idade>=12){
    	if(peso>=60){
    		mg=1000;
		}else{
			mg=875;
		}
	}else if(idade<12){
		if(peso<=9){
			mg=125;
		}else if(peso<=16){
			mg=250;
		}else if(peso<=24){
			mg=375;
		}else if(peso<=30){
			mg=500;
		}else{
			mg=750;
		}
	}else{
		printf("Não pode tomar medicamento!");
	}
	gotas=(mg/500)*20;
	printf("São %i gotas\n",gotas);

    system("pause");
}
