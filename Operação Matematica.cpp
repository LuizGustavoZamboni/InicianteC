#include <stdio.h>//standar io
#include <locale.h>// mudar o idioma
#include <stdlib.h>// controles de sistema

main()
{
    setlocale(LC_ALL,"Portuguese");
    float num1, num2, resultado;
    int num1i,num2i;
    //print file = escreva texto
    printf("Digite o valor do 1� numero: ");
    //leia
    scanf("%f",&num1);
    printf("Digite o valor do 2� numero: ");
    scanf("%f",&num2);
    
    system("cls");//clear screen - limpa tela
    
    resultado = num1+num2;
    printf("Adi��o: %.2f + %.2f = %.2f\n",num1,num2,resultado);
    resultado = num1-num2;
    printf("Subtra��o: %.2f - %.2f = %.2f\n",num1,num2,resultado);
    resultado = num1*num2;
    printf("Multiplica��o: %.2f * %.2f = %.2f\n",num1,num2,resultado);
    resultado = num1/num2;
    printf("Divis�o: %.2f / %.2f = %.2f\n",num1,num2,resultado);
    //converter valores real para inteiro
    num1i = (int) num1;
    num2i = (int) num2;
    
    resultado = num1i % num2i;
    printf("Resto da divis�o: %i %% %i = %.0f\n",num1i, num2i,resultado);
    
    printf("\n==== OPERADORES DE ATRIBUI��O ====\n");
    num1+=num2;//numero 1 = numero 1 + numero 2
    printf("\n += %.2f",num1);
    num1-=num2;//numero 1 = numero 1 - numero 2
    printf("\n -= %.2f",num1);
    num1*=num2;//numero 1 = numero 1 * numero 2
    printf("\n *= %.2f",num1);
    num1/=num2;//numero 1 = numero 1 / numero 2
    printf("\n /= %.2f",num1);
    num1i%=num2i;
    printf("\n %%= %i\n",num1i);
    
    system("pause");
}
