#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
//fun��o para c�lculo da pot�ncia
int potencia(int numero){
	return pow(numero,2);
}
//fun��o para c�lculo da raiz
float raizQuadrada(int numero){
	return sqrt(numero);
}
main()
{
    setlocale(LC_ALL,"Portuguese");
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%i",&num);
    printf("Potencia: %i\n",potencia(num));
    printf("Raiz Quadrada: %.2f\n",raizQuadrada(num));
    
    system("pause");
}
