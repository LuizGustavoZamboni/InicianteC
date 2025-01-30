#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    int anoAdm,anoAtual,tempoServ,anoServ;
    
    printf("Digite qual foi o ano de admissão: ");
    scanf("%i",&anoAdm);
    printf("Digite qual o ano atual: ");
    scanf("%i",&anoAtual);
    tempoServ = anoAtual - anoAdm;
    anoServ = 2050 - anoAdm;
    printf("O seu tempo de serviço é de %i e ficará com %i anos de serviço em 2050\n",tempoServ,anoServ);
    
    system("pause");
}
