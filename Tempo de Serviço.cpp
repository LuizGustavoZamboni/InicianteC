#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    int anoAdm,anoAtual,tempoServ,anoServ;
    
    printf("Digite qual foi o ano de admiss�o: ");
    scanf("%i",&anoAdm);
    printf("Digite qual o ano atual: ");
    scanf("%i",&anoAtual);
    tempoServ = anoAtual - anoAdm;
    anoServ = 2050 - anoAdm;
    printf("O seu tempo de servi�o � de %i e ficar� com %i anos de servi�o em 2050\n",tempoServ,anoServ);
    
    system("pause");
}
