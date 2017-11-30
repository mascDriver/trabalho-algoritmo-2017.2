#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int i=0;
void cadclientes();
void procliente ();
void listarcliente();
void cadproduto();
void venda();
void listarprod();
void prodfornecedor();
void listarmen();
void adcprotudo();
// limpar sistema setbuf(stdin,NULL);
typedef struct {
	char nome[50],cpf[11],endereco[50];
	int telefone, cartao;
}Cliente;
Cliente cliente[2];
void menu(){
	int opcao,*p = 0,n,a=0;
	do{
		system("clear");
		printf("\t\tSISTEMA EMBRASAO\n");
		printf("1 Cliente\n2 Produto\n3 Sair do sistema\n");
		do{
			printf("\nDigite o numero de acesso do sistema _");
			scanf("%d",&n);
			setbuf(stdin,NULL);
			system("clear");
			printf("\t\tSISTEMA EMBRASAO\n");
			printf("1 Cliente\n2 Produto\n3 Sair do sistema\n");
			if(n>3){
				printf("\t\tOpção invalida\n");
				
			}
			else{
				a=1;
			}
		}while(a!=1);
		switch(n){
			case 1:
				do{
					system("clear");
					printf("Digite a sessão desejada\n\n1 Cadastrar cliente\n2 Buscar Cliente\n3 Clientes cadastrados com cartão\n0 Menu anterior\n");
					printf("\nDigite o numero de acesso do sistema _");
					scanf("%d",&opcao);
					setbuf(stdin,NULL);
					switch(opcao){
						case 1:
							system("clear");
							cadclientes(i);
							break;
						case 2:
							system("clear");
							procliente();
							break;
						case 3:
							system("clear");
							listarcliente();
							break;
							
					}
				}while(opcao!=0);
				break;
				
			case 2:
				do{
					system("clear");
					printf("Digite a sessão desejada\n\n1 Cadastrar Produto\n2 Cadastrar Venda\n3 Listar produto\n4 Listar produto por fornecedor\n5 Listar produtos com estoques menores que 10\n6 adicionar itens a produto ja existente\n0 Menu anterior\n");
					printf("\nDigite o numero de acesso do sistema _");
					scanf("%d",&opcao);
					setbuf(stdin,NULL);
					switch(opcao){
						case 1:
							system("clear");
							cadproduto();
							break;
						case 2:
							system("clear");
							venda();
							break;
						case 3:
							system("clear");
							listarprod();
							break;
						case 4:
							system("clear");
							prodfornecedor();
							break;
						case 5:
							system("clear");
							listarmen();
							break;
						case 6:
							system("clear");
							adcprotudo();
							break;
					}
				}while(opcao!=0);
					break;
				case 3:
					printf("\t\tAté mais\n");
					break;	
				
				
		}
	}while(n!=3);
}
void cadclientes(int *i){
	char op;
	for(i;i<2;i++){
		printf("Digite o nome do usuario\n");
		scanf("%[^\n]s",cliente[i].nome);
		setbuf(stdin,NULL);
		scanf("%s",cliente[i].cpf);
		setbuf(stdin,NULL);
		scanf("%s",cliente[i].endereco);
		setbuf(stdin,NULL);
		printf("Quer digitar outro usuario s ou n\n");
		scanf("%c",&op);
		if(op=='n'){
			break;
		}
	}
}
void procliente(){
	char a[50];
	int l;
	printf("Digite o nome do usuario desejado: \n");
	scanf("%s",a);
	setbuf(stdin,NULL);
	for (l = 0; l < 2; l++){
		if(strcmp(cliente[l].cpf,a)==0){
			printf("%s\n%s\n%s\n",cliente[l].nome,cliente[l].cpf,cliente[l].endereco);
		}
		getchar();
	}
}
void listarcliente(){
	int l;
	for(l=0;l<2;l++){
		printf("%s\n",cliente[l].nome);
		getchar();
	}
}
void cadproduto(){

}
void venda(){

}
void listarprod(){

}
void prodfornecedor(){

}
void listarmen(){

}
void adcprotudo(){

}
int main(){
	menu();
	return 0;
}