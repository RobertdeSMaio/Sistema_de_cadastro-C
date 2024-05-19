#include <stdio.h>
#include <stdlib.h>
#define SIZE 10000

char nome[SIZE][100];
char email[SIZE][100];
char comorbidade[SIZE][100];
char endereco [SIZE][100];
int cpf [SIZE];
int telefone [SIZE];
int idade[SIZE];
int cep [SIZE];
char risco [SIZE][100];
void cadastro();
void pesquisa();
static int linha;
int cpfPesquisa;
char emailPesquisa[50];
int i;
int op, opcao, opcao1, opcao2, opcao3, opcao4, opcao5, i, quant;
int s,n;


int main (void){

	struct referencia{

	 char nome0[100],nome1[100],nome2[100],nome3[100],nome4[100];

	}
CA[600];
CA[600];
CA[600];
CA[600];
CA[600];
CA[600];
CA[600];
	 char nome5[100];

	 system("cls");
	 printf("nome de atendente: ");
	 fflush(stdin);
	 scanf("%[^\n]s", nome5);
	 printf("Senha do Posto de Saude: ");
	 scanf("%d", &opcao3);

	 	switch(opcao3){
	 		case 123456:

	 		while(opcao!=5){
	 	while(opcao2!=1){
	 		system("color F4");
	 		system("cls");
	 			printf("--------------------------------------------------------------------\n");
	 			printf("\t\t\t\tPosto de Saude\n");
	 			printf("--------------------------------------------------------------------\n\n");
	 			printf("\t\t\tSeja Bem-Vindo, Atendente %s\n", nome5);
	 			printf("--------------------------------------------------------------------\n");
	 			printf("1-Cadastrar\n");
	 			printf("2-Pesquisar dados\n");
	 			printf("3-Excluir\n");
	 			printf("4-Informacoes do Sistema\n");
	 			printf("5-Sair\n");
	 			printf("--------------------------------------------------------------------\n\n");
	 			printf("\nQual opcao voce deseja acessar? \npara sair digite 5:  ");
	 			scanf("%d", &opcao);
        switch(opcao){
	 		case 1:
	 			system("cls");
	 			printf("\n\nQuantos cadastros voce deseja realizar? \n");
	 			scanf("%d", &quant);
            for(i=1;i<=quant;i++){
                    system("cls");
        printf("\n\n\t\t\tINICIANDO CADASTRO %d\n",i);
	 	printf("--------------------------------------------------------------------\n\n ");
        printf("\nDigite o nome: ");
        scanf("%s", &nome[linha]);
        printf("\nDigite o email: ");
        scanf("%s", &email[linha]);
        printf("\nDigite o cpf: ");
        scanf("%d", &cpf[linha]);
        printf("\nDigite o telefone: ");
        scanf("%d", &telefone[linha]);
        printf("\nDigite o endereco: ");
        scanf("%s", &endereco[linha]);
        printf("\nDigite o cep: ");
        scanf("%d", &cep[linha]);
        printf("\nQual a idade? ");
        scanf("%d", &idade[linha]);
        if(idade <= 6,idade >= 60){
            printf("\nEste paciente e grupo de risco \n");
        }
        printf("A pessoa tem alguma comorbidade? s/n:   \n");
        scanf("%s", &comorbidade);
                if(comorbidade == s){
                    printf("\nEste paciente e grupo de risco!!\n");
                    printf("\nDigite a comorbidade: ");
                    scanf("%s", &comorbidade[linha]);
                }else(comorbidade == n);{
                    printf("\nEste paciente nao e grupo de risco\n");
            }
            printf("\nEste paciente esta em alguem grupo de risco? s/n  \n");
            scanf("%s", &risco[linha]);
                if(risco == s){
                    printf("\nManter afastado de zona critica\n");
                }else(risco == n);{
                    printf("\nSer medicado e afastado de zona critica\n");
                }
        printf("\nDigite 1 para continuar ou outro valor para sair:  \n");
        scanf("%d", &op);
        linha=linha+1;
        system("pause");
        system("cls");
        }
        break;
            case 2:
             system("cls");
                printf("\n\n\t\t\tEXIBINDO DADOS \n");
                printf("--------------------------------------------------------------------\n\n");
                printf("\nDigite 1 para pesquisar por CPF ou 2 para pesquisar por email:   ");
                scanf("%d", &op);
                 switch(op){
                    case 1:
                       printf("\nDigite o CPF:  ");
                       scanf("&d", &cpfPesquisa);
                       for(i=0;i<SIZE;i++){
                       if(strcmp(cpf[i]>0, cpfPesquisa)==1){
                        printf("\nNome: %s \nEmail: %s \nCPF: %d \nTelefone: %d \nEndereco: %s \nCep: %d \nIdade: %d \nComorbidade: %s", nome[i], email[i], cpf[i], telefone[i], endereco[i], cep[i], idade[i], comorbidade[i]);
                       }
                      }
                      printf("\nDigite 1 para continuar pesquisando  ");
                          scanf("%d", &op);
                          system("pause");
                    case 2:
                        printf("\nDigite o email:  ");
                        scanf("%s", &emailPesquisa);
                        for(i=0;i<SIZE;i++){
                        if(strcmp(email[i], emailPesquisa)==1){}
                        printf("\nNome: %s \nEmail: %s \nCPF: %d \nTelefone: %d \nEndereco: %s \nCep: %d \nIdade: %d \nComorbidade: %s", nome[i], email[i], cpf[i], telefone[i], endereco[i], cep[i], idade[i], comorbidade[i]);
                        }
                    }
                          printf("\nDigite 1 para continuar pesquisando  ");
                          scanf("%d", &op);
                          system("pause");
              break;
                    case 3:
                    system("cls");
                     printf("\n\n\t\t\tEXCLUIR DADOS \n");
                printf("--------------------------------------------------------------------\n\n");
                printf("\nDigite 1 para pesquisar por CPF ou 2 para pesquisar por email:   ");
                scanf("%d", &op);
                 switch(op){
                        case 1:
                           printf("\nDigite o CPF:  ");
                           scanf("&d", &cpfPesquisa);
                           for(i=0;i<SIZE;i++){
                           if(cpf[i], cpfPesquisa){
                            printf("\nNome: %s \nEmail: %s \nCPF: %d \nTelefone: %d \nEndereco: %s \nCep: %d \nIdade: %d \nComorbidade: %s", nome[i], email[i], cpf[i], telefone[i], endereco[i], cep[i], idade[i], comorbidade[i]);
                             }
                            }
                        case 2:
                            printf("\nDigite o Email:  ");
                            scanf("%s", &emailPesquisa);
                            for(i=0;i<SIZE;i++){
                            if(strcmp(email[i], emailPesquisa)==1){}
                            printf("\nNome: %s \nEmail: %s \nCPF: %d \nTelefone: %d \nEndereco: %s \nCep: %d \nIdade: %d \nComorbidade: %s", nome[i], email[i], cpf[i], telefone[i], endereco[i], cep[i], idade[i], comorbidade[i]);
                            }
                                for(i=1;i<=quant;i++){
                                    system("cls");
                                    memset(linha,0,sizeof(linha));
                                    printf("Ficha Excluida!");
                                    system("pause");
                                }
               }
               break;
               		case 4:
               		system("cls");
                     printf("\n\n\t\t\tDADOS DO SISTEMA \n");
                printf("--------------------------------------------------------------------\n");
                printf("\nFEITO POR ROBERT DE S. MAIO \nFEITO PELO CODE::BLOCKS \n\n-------------------------------------------------------------------- \nME SIGA PARA VER MEUS PROJETOS \n[LINKEDIN=https://www.linkedin.com/in/robert-s-maio-62b38019a/] \n[GITHUB=https://github.com/RobertSMaio] \n[PORTFOLIO=https://portfolio-maio.netlify.app/] \n\n");
				printf("--------------------------------------------------------------------\n\n");	
                 printf("\nDigite 1 para continuar pesquisando  ");
                          scanf("%d", &op);
                          system("pause");
						  break;
                    case 5:
                    	system("cls");
                     printf("\n\n\t\t\tATE A PROXIMA \n");
                printf("--------------------------------------------------------------------\n\n");
                printf("\nDigite 1 para sair  ");
                          scanf("%d", &op);
                          system("pause");
                          return 0;
              }
            }
          }
        }	
}
