#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    int numero, potencia, expoente;
    float raiz;
    
    printf("Digite um numero inteiro: ");
    scanf("%i",&numero);
    printf("Digite um expoente: ");
    scanf("%i",&expoente);
	potencia = pow(numero, expoente);
	raiz = sqrt(numero);
	
	printf("A raiz quadrada de %i é: %.4f\nO numero %i ao quadrado é: %i\n",numero,raiz,numero,potencia);    
    
    system("pause");
}
