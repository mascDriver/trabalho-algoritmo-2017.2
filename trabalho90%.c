#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int i=0,ii=0;
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
typedef struct{
	char nomeprod[50],fornecedor[50], dfab[20], dval[20];
	int qestq;
	double vaqui, vvenda;
}Produto;
Produto produto[2];
Cliente cliente[2];
void menu(){
	int opcao,n,a=0;
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
							i++;
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
							ii++;
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
	char op;
	for(i;i<2;i++){
		printf("Digite o nome do usuario?\n");
		setbuf(stdin,NULL);
		getchar();
		scanf("%[^\n]s",cliente[i].nome);
		setbuf(stdin,NULL);
		printf("Digite o cpf do usuario?\n");
		scanf("%s",cliente[i].cpf);
		setbuf(stdin,NULL);
		printf("Digite o endereço do usuario?\n");
		scanf("%[^\n]s",cliente[i].endereco);
		setbuf(stdin,NULL);
		printf("Quer inserir outro usuario s ou n\n");
		scanf("%c",&op);
		setbuf(stdin,NULL);
		if(op=='n'){
			break;
		}
		else{

		}
	}
}
void procliente(){
	char a[50];
	int l;
	printf("Digite o cpf do usuario desejado: \n");
	scanf("%s",a);
	setbuf(stdin,NULL);
	for (l = 0; l < 2; l++){
		if(strcmp(cliente[l].cpf,a)==0){
			printf("%s\n%s\n%s\n",cliente[l].nome,cliente[l].cpf,cliente[l].endereco);
		}
	}
	printf("Pressione enter para sair");
	getchar();
}
void listarcliente(){
	int l;
	for(l=0;l<2;l++){
		printf("%s\n",cliente[l].nome);
	}
	getchar();
}
void cadproduto(){
	int l;
	char op; 
	for(ii;ii<2;ii++){
		printf("Insira o nome do produto\n");
		setbuf(stdin,NULL);
		getchar();
		scanf("%[^\n]s",produto[ii].nomeprod);
		setbuf(stdin,NULL);
		printf("Nome do fornecedor\n");
		scanf("%[^\n]s",produto[ii].fornecedor);
		setbuf(stdin,NULL);
		printf("Insira a data de fabricação do produto\n");
		scanf("%[^\n]s",produto[ii].dfab);
		setbuf(stdin,NULL);
		printf("Insita a data de validade do produto\n");
		scanf("%[^\n]s",produto[ii].dval);
		setbuf(stdin,NULL);
		printf("Insira o valor da aquisição do produto\n");
		scanf("%lf",&produto[ii].vaqui);
		setbuf(stdin,NULL);
		printf("Insira o valor da venda\n");
		scanf("%lf",&produto[ii].vvenda);
		setbuf(stdin,NULL);
		printf("Quantos itens existira no estoque?\n");
		scanf("%d",&produto[ii].qestq);
		setbuf(stdin,NULL);
		printf("Quer inserir outro usuario s ou n\n");
		scanf("%c",&op);
		setbuf(stdin,NULL);
		if(op=='n'){
			break;
		}
		else{

		}
	}
}
void venda(){

}
void listarprod(){
	int l;
	for (l = 0; l < 2; l++){
		if(strcmp(produto[l].nomeprod,"")==0){
			
		}
		else 
			printf("%s\n%s\n%s\n%s\n%.2lf\n%.2lf\n%d\n",produto[l].nomeprod,produto[l].fornecedor,produto[l].dfab,produto[l].dval,produto[l].vaqui,produto[l].vvenda,produto[l].qestq);
	}
	printf("Pressione enter para sair");
	getchar();
}
void prodfornecedor(){
	char a[50];
	int l;
	printf("Digite o produto desejado:\n");
	scanf("%[^\n]s",a);
	setbuf(stdin,NULL);
	for (l = 0; l < 2; l++){
		if(strcmp(produto[l].fornecedor,a)==0){
			printf("%s\n%s\n%s\n%.2lf\n%.2lf\n%d\n",produto[l].nomeprod,produto[l].dfab,produto[l].dval,produto[l].vaqui,produto[l].vvenda,produto[l].qestq);
		}
	}
	printf("Pressione enter para sair");
	getchar();
}
void listarmen(){
	int l;
	for (l = 0; l < 2; l++){
		if(produto[l].qestq<10){
			printf("%s\n%s\n%s\n%.2lf\n%.2lf\n%d\n",produto[l].nomeprod,produto[l].dfab,produto[l].dval,produto[l].vaqui,produto[l].vvenda,produto[l].qestq);
		}
	}
	printf("Pressione enter para sair");
	getchar();
}
void adcprotudo(){
	char a[50];
	int l;
	printf("Digite o produto desejado:\n");
	scanf("%[^\n]s",a);
	setbuf(stdin,NULL);
	for (l = 0; l < 2; l++){
		if(strcmp(produto[l].nomeprod,a)==0){
			printf("Qual será seu estoque atual?\n");
			scanf("%d",&produto[l].qestq);
			break;
		}
		else
			printf("Produto nao encontrado\n");
	}
	printf("Pressione enter para sair");
	getchar();
}
int main(){
	setbuf(stdin,NULL);
	menu();
	return 0;
}