#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    int idade,nota;
    printf("Bem vindo(a) ao show de Talentos Programe Legal\nInforme sua idade:\n");
    scanf("%i",&idade);
    printf("Informe sua nota:\n");
    scanf("%i",&nota);
    if(idade>=18&&nota>=9){
    	printf("Voc� avan�ou para a final e recebeu uma chave dourada do sucesso!\n");
		}else if(idade>=18&&nota>=6){
			printf("Passou para a proxima etapa, mas precisa melhorar um pouco suas habilidades!\n");
		}else if(idade<18&&nota>=9){
			printf("Voc� � umma estrela em ascens�o e ganhou um pr�mio de incentivo para continuar participando!\n");
		}else if(idade<18&&nota>=6){
			printf("Voc� recebeu o Certificado de participa��o, continue estudando mais e logo estar� pronto!\n");
		}else if(nota<6){
			printf("n�o foi dessa vez! Treine um pouco mais antes de participar novamente.\n");
		}else{
			printf("Continue treinando e se inscreva novamente no proximo ano!");
		}
    
    system("pause");
}
