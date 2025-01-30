#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

main()
{
    setlocale(LC_ALL,"Portuguese");
    char nomeProf[50],email[30],cidade[20],estado[2],endereco[50],telefone[15];
    
    printf("Digite o nome do professor:\n");
    gets(nomeProf);
    printf("Digite a sigla de seu estado:\n");
    gets(estado);
    printf("Digite sua cidade:\n");
    gets(cidade);
    printf("Informe seu endereço:\n");
    gets(endereco);
    printf("Digite seu telefone de contato:\n");
    scanf("%s",&telefone);
    printf("Informe seu e-mail:\n");
    scanf("%s",email);
    if (strcspn(email,"@") == NULL){
    	printf("ERRO! Digite um email valido!\n");
	}else{
		system("cls");
		printf("Cadastro realizado com sucesso!\n");
		printf("Nome do professor: %s\nE-mail: %s\nEstado: %s\nCidade: %s\nEnderenço: %s\nTelefone de contato: %s\n",nomeProf,email,estado,cidade,endereco,telefone);
	}

    system("pause");
}
