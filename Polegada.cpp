#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    float centimetro;
    int i;
    
    for(i=5;i<=52;i++){
    	centimetro=i*2.54;
    	printf("%i'' s�o %.2fCM.\n",i,centimetro);
	}
	
    system("pause");
}
