#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 2
int i=0,ii=0,iii=0;
void cadclientes();
void procliente ();
void listarcliente();
void cadproduto();
void vendacartao();
void vendadinheiro();
void vendacheque();
void vendafiado();
void listarprod();
void prodfornecedor();
void listarmen();
void adcprotudo();
// limpar sistema setbuf(stdin,NULL);
typedef struct {
	char nome[50],cpf[11],endereco[50],cartao[20];
	int telefone;
}Cliente;
typedef struct{
	char nomeprod[50],fornecedor[50], dfab[20], dval[20];
	int qestq;
	double vaqui, vvenda;
}Produto;
typedef struct{
	char nome[50],cartao[20],nomeprod[20];
	double vvenda;

}Venda;
Venda venda[MAX];
Produto produto[MAX];
Cliente cliente[MAX];
void menu(){
	int opcao,n,a=0;
	do{
		system("clear");
		printf("\t\tSISTEMA EMBRASAO\n");
		printf("1 Cliente\n2 Produto\n3 Venda\n0 Sair  do Sistema\n");
		do{
			printf("\nDigite o numero de acesso do sistema _");
			scanf("%d",&n);
			setbuf(stdin,NULL);
			system("clear");
			printf("\t\tSISTEMA EMBRASAO\n");
			printf("1 Cliente\n2 Produto\n3 Venda\n0 Sair do Sistema\n");
			
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
					printf("Digite a sessão desejada\n\n1 Cadastrar Produto\n2 Listar produto\n3 Listar produto por fornecedor\n4 Listar produtos com estoques menores que 10\n5 adicionar itens a produto ja existente\n0 Menu anterior\n");
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
							listarprod();
							break;
						case 3:
							system("clear");
							prodfornecedor();
							break;
						case 4:
							system("clear");
							listarmen();
							break;
						case 5:
							system("clear");
							adcprotudo();
							break;
					}
				}while(opcao!=0);
					break;
				case 3:
					do{
						system("clear");
						printf("Digite a sessão desejada\n\n1 Venda com cartão\n2 Venda em Dinheiro\n3 Venda em cheque\n4 Venda em fiado\n0 Menu anterior\n");
						printf("\nDigite o numero de acesso do sistema _");
						scanf("%d",&opcao);
						setbuf(stdin,NULL);
						switch(opcao){
							case 1:
								system("clear");
								vendacartao();
								iii++;
								break;
							case 2:
								system("clear");
								vendadinheiro();
								break;
							case 3:
								system("clear");
								vendacheque();
								break;
							case 4:
								system("clear");
								vendafiado();
								break;
						}
					}while(opcao!=0);
						break;
				case 0:
					printf("\t\tAté mais\n");
					break;	
				
				
		}
	}while(n!=0);
}
void cadclientes(){
	char op,c;
	for(i;i<MAX;i++){
		printf("Digite o nome do usuario?\n");
		setbuf(stdin,NULL);
		scanf("%[^\n]s",cliente[i].nome);
		setbuf(stdin,NULL);
		printf("Digite o cpf do usuario?\n");
		scanf("%s",cliente[i].cpf);
		setbuf(stdin,NULL);
		printf("Digite o endereço do usuario?\n");
		scanf("%[^\n]s",cliente[i].endereco);
		setbuf(stdin,NULL);
		printf("Usuario possui cartao do mercado s ou n\n");
		scanf("%c",&c);
		getchar();
		setbuf(stdin,NULL);
		if(c=='s'){
			printf("Digite o numero do cartao\n");
			scanf("%s",cliente[i].cartao);
			setbuf(stdin,NULL);
		}
		printf("Quer inserir outro usuario s ou n\n");
		scanf("%c",&op);
		getchar();
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
	if(strcmp(cliente[l].cartao,"")==0)
		printf("Nome\tCPF\tEndereço\n");
	else
		printf("Nome\tCPF\tEndereço\tCartao\n");
	for (l = 0; l < MAX; l++){
		if(strcmp(cliente[l].cpf,a)==0){
			if(strcmp(cliente[l].cartao,"")==0){
				printf("%s\t%s\t%s\n",cliente[l].nome,cliente[l].cpf,cliente[l].endereco);
			}
			else{
				printf("%s\t%s\t%s\t%s\n",cliente[l].nome,cliente[l].cpf,cliente[l].endereco,cliente[l].cartao);
			}
		}
	}
	printf("Pressione enter para sair");
	getchar();
}
void listarcliente(){
	int l;
	setbuf(stdin,NULL);
	printf("Nome\tCPF\tEndereço\tCartao\n");
	for (l = 0; l < MAX; l++){
		if(strcmp(cliente[l].cartao,"")==0){
		}
		else
			printf("%s\t%s\t%s\t\t%s\n",cliente[l].nome,cliente[l].cpf,cliente[l].endereco,cliente[l].cartao);
	}
	printf("Pressione enter para sair");
	getchar();
}
void cadproduto(){
	int l;
	char op; 
	for(ii;ii<MAX;ii++){
		printf("Insira o nome do produto\n");
		setbuf(stdin,NULL);
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
		printf("Quer inserir outro produto s ou n\n");
		scanf("%c",&op);
		getchar();
		setbuf(stdin,NULL);
		if(op=='n'){
			break;
		}
		else{

		}
	}
}
void vendacartao(){
	int l,op;
	printf("Selecione o cliente pelo numero antes de seu nome\n");
	for (l = 0; l < MAX; l++){
		printf("%d- %s\n",l,cliente[l].nome);
	}
	scanf("%d",&op);
	setbuf(stdin,NULL);
	strcpy(venda[iii].nome,cliente[op].nome);
	printf("%s",venda[iii].nome);
	getchar();

}
void vendadinheiro(){
	int l,op;
	printf("Selecione o cliente pelo numero antes de seu nome\n");
	for (l = 0; l < MAX; l++){
		printf("%d- %s\n",l,cliente[l].nome);
	}
	scanf("%d",&op);
}
void vendacheque(){
	int l,op;
	printf("Selecione o cliente pelo numero antes de seu nome\n");
	for (l = 0; l < MAX; l++){
		printf("%d- %s\n",l,cliente[l].nome);
	}
	scanf("%d",&op);
}
void vendafiado(){
	char s[11],s1[11],s2[11];
	printf("Digite a senha\n");
	scanf("%s",s);
	if(strcmp(s,"qwertasdfzxc")==0){
		printf("Digite a segunda senha\n");
		scanf("%s",s1);
		if(strcmp(s1,"abcdefg")==0){
			printf("Digite a ultima senha\n");
			scanf("%s",s2);
			setbuf(stdin,NULL);
			if(strcmp(s2,"password")==0){
				system("clear");
				printf("\n\n\t\t\tNAO VENDEMOS FIADO\n");
				getchar();
			}
		}
	}

}
void listarprod(){
	int l;
	char a[50];
	printf("Digite o nome do produto\n");
	scanf("%s",a);
	setbuf(stdin,NULL);
	printf("Nome\tFornecedor\tData de fabricação\tData de validade\tValor de aquisição\tValor de venda\t quantidade em estoque\n");
	for (l = 0; l < MAX; l++){
		if(strcmp(produto[l].nomeprod,a)==0){
			printf("%s\t%s\t\t%s\t\t%s\t\t%.2lf\t\t\t%.2lf\t\t %d\n",produto[l].nomeprod,produto[l].fornecedor,produto[l].dfab,produto[l].dval,produto[l].vaqui,produto[l].vvenda,produto[l].qestq);	
		}
	}
	printf("Pressione enter para sair");
	getchar();
}
void prodfornecedor(){
	char a[50];
	int l;
	printf("Digite o nome do fornecedor do produto desejado:\n");
	scanf("%[^\n]s",a);
	setbuf(stdin,NULL);
	printf("Nome\tFornecedor\tData de fabricação\tData de validade\tValor de aquisição\tValor de venda\t quantidade em estoque\n");
	for (l = 0; l < MAX; l++){
		if(strcmp(produto[l].fornecedor,a)==0){
			printf("%s\t%s\t\t%s\t\t%s\t\t%.2lf\t\t\t%.2lf\t\t %d\n",produto[l].nomeprod,produto[l].fornecedor,produto[l].dfab,produto[l].dval,produto[l].vaqui,produto[l].vvenda,produto[l].qestq);	
		}
	}
	printf("Pressione enter para sair");
	getchar();
}
void listarmen(){
	int l;
	printf("Nome\tFornecedor\tData de fabricação\tData de validade\tValor de aquisição\tValor de venda\t quantidade em estoque\n");
	for (l = 0; l < MAX; l++){
		if(produto[l].qestq<10){
			printf("%s\t%s\t\t%s\t\t%s\t\t%.2lf\t\t\t%.2lf\t\t %d\n",produto[l].nomeprod,produto[l].fornecedor,produto[l].dfab,produto[l].dval,produto[l].vaqui,produto[l].vvenda,produto[l].qestq);
		}
	}
	printf("Pressione enter para sair");
	getchar();
}
void adcprotudo(){
	char a[50];
	int l;
	printf("Digite o nome do fornecedor:\n");
	scanf("%[^\n]s",a);
	setbuf(stdin,NULL);
	for (l = 0; l < MAX; l++){
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