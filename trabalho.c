#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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
Cliente cliente1;
void menu(){
	int opcao,n,i,a=0;
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
							cadclientes();
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
void cadclientes(){
	printf("Digite o nome do usuario\n");
	scanf("%[^\n]s",cliente1.nome);
	setbuf(stdin,NULL);
	scanf("%s",cliente1.cpf);
	setbuf(stdin,NULL);
	scanf("%s",cliente1.endereco);
	setbuf(stdin,NULL);
}
void procliente(){
	char a[50];
	printf("Digite o nome do usuario desejado: \n");
	scanf("%s",a);
	setbuf(stdin,NULL);
	if(strcmp(cliente1.cpf,a)==0){
		printf("%s\n%s\n%s\n",cliente1.nome,cliente1.cpf,cliente1.endereco);
	}
	getchar();
}
void listarcliente(){
	printf("%s\n",cliente1.nome);
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