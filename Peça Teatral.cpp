#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    float precoConvite,precoEspetaculo;
    int convites;
    
    printf("Informe o custo do espetaculo: ");
    scanf("%f",&precoEspetaculo);
    printf("Informe o preço para cada convite: ");
    scanf("%f",&precoConvite);
    convites=precoEspetaculo/precoConvite+1;
    printf("Será necessarios vender %i convites.\n",convites);
    
    system("pause");
}
