#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    int idade,qtdeMenor18=0,qtdeJogador=0,idadeTotal=0;
    float peso,altura,idadeMedia,alturaMedia,pesoTotal=0,alturaTotal=0;
    
    printf("Digite os dados dos jogadores!\n");
    do{
    	printf("Idade ou zera para encerrar:\n");
    	scanf("%i",&idade);
    	if(idade>0){
    		printf("Altura e Peso:\n");
    		scanf("%f%f",&altura,&peso);
    		qtdeJogador++;
    		idadeTotal+=idade;
    		alturaTotal+=altura;
    		pesoTotal+=peso;
    		if(idade<18){
    			qtdeMenor18++;
			}
		}
	}while(idade>0);
	alturaMedia=alturaTotal/qtdeJogador;
	idadeMedia=idadeTotal/qtdeJogador;
	
	printf("Total de jogadores avaliados: %i\nJogadores menores de 18: %i\nMedia de idade: %.2f\nMedia da altura: %.2f\nTotal de peso dos jogadores %.2f\n",qtdeJogador,qtdeMenor18,idadeMedia,alturaMedia,pesoTotal);
	
    system("pause");
}
