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
    printf("Informe o pre�o para cada convite: ");
    scanf("%f",&precoConvite);
    convites=precoEspetaculo/precoConvite+1;
    printf("Ser� necessarios vender %i convites.\n",convites);
    
    system("pause");
}
