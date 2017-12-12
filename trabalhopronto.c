#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 2
int i=0,ii=0,iii=0,iiii=0;
void listardados();
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
	char nome[50],cpf[12],endereco[50],cartao[20];
	int telefone;
}Cliente;
typedef struct{
	char nomeprod[50],fornecedor[50], dfab[20], dval[20];
	int qestq;
	double vaqui, vvenda;
}Produto;
typedef struct{
	char nome[50],cartao[20],nomeprod[20][20];
	double vvenda;

}Venda;
Venda venda[MAX];
Produto produto[MAX];
Cliente cliente[MAX];
void menu(){
	int opcao,n,a=0;
	char senha[20];
	do{
		system("clear");
		printf("\t\tSISTEMA EMBRASAO\n");
		printf("1 Cliente\n2 Produto\n3 Venda\n4 Gerencia\n0 Sair do Sistema\n");
		do{
			printf("\nDigite o numero de acesso do sistema _");
			scanf("%d",&n);
			setbuf(stdin,NULL);
			system("clear");
			printf("\t\tSISTEMA EMBRASAO\n");
			printf("1 Cliente\n2 Produto\n3 Venda\n4 Gerencia\n0 Sair do Sistema\n");
			
			if(n>4){
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
								if(strcmp(cliente[0].nome,"")==0){
									printf("Nenhum usuario cadastrado\n");
									getchar();
									break;
								}
								else{
									system("clear");
									procliente();
									break;
								}
						case 3:

								if(strcmp(cliente[0].nome,"")==0){
									printf("Nenhum usuario cadastrado\n");
									getchar();
									break;
								}
								else{
									system("clear");
									listarcliente();
									break;
								}
							
					}
				}while(opcao!=0);
				break;
				
			case 2:
				do{
					system("clear");
					printf("Digite a sessão desejada\n\n1 Cadastrar Produto\n2 Listar produto\n3 Listar produto por fornecedor\n4 Listar produtos com estoques menores que 10\n5 Adicionar itens a produto ja existente\n0 Menu anterior\n");
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
							if(strcmp(produto[0].nomeprod,"")==0){
								printf("Nenhum produto cadastrado\n");
								getchar();
								break;
								}
								else{
									system("clear");
									listarprod();
									break;
								}
						case 3:
						if(strcmp(produto[0].nomeprod,"")==0){
							printf("Nenhum produto cadastrado\n");
							getchar();
							break;
						}
						else{
							system("clear");
							prodfornecedor();
							break;
						}
						case 4:
						if(strcmp(produto[0].nomeprod,"")==0){
							printf("Nenhum produto cadastrado\n");
							getchar();
							break;
						}
						else{
							system("clear");
							listarmen();
							break;
						}
						case 5:
						if(strcmp(produto[0].nomeprod,"")==0){
							printf("Nenhum produto cadastrado\n");
							getchar();
							break;
						}
						else{
							system("clear");
							adcprotudo();
							break;
						}
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
								if(strcmp(cliente[0].nome,"")==0){
									printf("Nenhum usuario cadastrado\n");
									getchar();
									break;
								}
								else if(strcmp(produto[0].nomeprod,"")==0){
									printf("Nenhum produto cadastrado\n");
									getchar();
									break;
								}
								else if(strcmp(cliente[0].cartao,"")==0){
									printf("Nenhum usuario com cartao cadastrado\n");
									getchar();
									break;	
								}
								else{
									system("clear");
									vendacartao();
									iii++;
									iiii++;
									break;
								}
							case 2:
								if(strcmp(cliente[0].nome,"")==0){
									printf("Nenhum usuario cadastrado\n");
									getchar();
									break;
								}
								else if(strcmp(produto[0].nomeprod,"")==0){
									printf("Nenhum produto cadastrado\n");
									getchar();
									break;
								}
								else{
									system("clear");
									vendadinheiro();
									break;
								}
							case 3:
								if(strcmp(cliente[0].nome,"")==0){
									printf("Nenhum usuario cadastrado\n");
									getchar();
									break;
								}
								else if(strcmp(produto[0].nomeprod,"")==0){
									printf("Nenhum produto cadastrado\n");
									getchar();
									break;
								}
								else{
									system("clear");
									vendacheque();
									break;
								}
							case 4:
								if(strcmp(cliente[0].nome,"")==0){
									printf("Nenhum usuario cadastrado\n");
									getchar();
									break;
								}
								else if(strcmp(produto[0].nomeprod,"")==0){
									printf("Nenhum produto cadastrado\n");
									getchar();
									break;
								}
								else{
									system("clear");
									vendafiado();
									break;
								}
						}
					}while(opcao!=0);
						break;
				case 4:
						system("clear");
						printf("Digite a senha\n");
						setbuf(stdin,NULL);
						scanf("%s",senha);
						setbuf(stdin,NULL);
						if(strcmp(senha,"password")==0){
							listardados();
						}
					break;
				case 0:
					printf("\t\tAté mais\n");
					break;	
				
				
		}
	}while(n!=0);
}
void listardados(){
	int l,k;
	char sla[50];
	printf("Digite o cpf do usuario que deseja consultar\n");
	scanf("%s",sla);
	setbuf(stdin,NULL);
		for(l=0;l<2;l++){
			if(strcmp(venda[l].nome,"")==0){

			}
			else{
				if(venda[l].vvenda==0){

				}
				else{
					printf("Dados do cliente %s\n", cliente[l].nome);
					printf("o cliente comprou com o cartao : %s  um valor total de: R$%.2lf\n", venda[l].cartao,venda[l].vvenda);
			}
		}
	getchar();
	}
}
void cadclientes(){
	char op,c;
	for(i;i<MAX;i++){
		printf("Digite o nome do usuario?\n");
		setbuf(stdin,NULL);
		scanf("%[^\n]s",cliente[i].nome);
		setbuf(stdin,NULL);
		printf("Digite o cpf do usuario?\n");
		do{
			setbuf(stdin,NULL);
			scanf("%s",cliente[i].cpf);
			setbuf(stdin,NULL);
			if(strlen(cliente[i].cpf)< 11)
				printf("Digite 11 numeros no cpf\n");
		}while(strlen(cliente[i].cpf)!=11);
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
	printf("%s\n", cliente[i].cpf);
	if(strcmp(cliente[l].cartao,"")==0)
		printf("Nome\tCPF\t\tEndereço\n");
	else
		printf("Nome\tCPF\t\tEndereço\tCartao\n");
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
		do{
			printf("Insira a data de fabricação do produto\n");
			scanf("%[^\n]s",produto[ii].dfab);
			setbuf(stdin,NULL);
			if ((strlen(produto[ii].dfab)<7)){
				printf("Data incorreta\n");
			}
		}while(strlen(produto[ii].dfab)<7);
		do{
			printf("Insita a data de validade do produto\n");
			scanf("%[^\n]s",produto[ii].dval);
			setbuf(stdin,NULL);
			if (strlen(produto[ii].dval)<7){
				printf("Data incorreta\n");
			}
		}while(strlen(produto[ii].dval)<7);
		printf("Insira o valor da aquisição do produto\n");
		scanf("%lf",&produto[ii].vaqui);
		setbuf(stdin,NULL);
		printf("Valores invalidos\n");
		printf("Insira o valor da venda\n");
		scanf("%lf",&produto[ii].vvenda);
		setbuf(stdin,NULL);
		printf("Valores invalidos\n");
		printf("Quantos itens existira no estoque?\n");
		scanf("%d",&produto[ii].qestq);
		setbuf(stdin,NULL);
		printf("Digite estoque acima de 0\n");
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
	int l,op,op1,op2,k=0;
	float total=0;
	char c,sair;
	system("clear");
	printf("Selecione o cliente pelo numero antes de seu nome\n");
	for (l = 0; l < MAX; l++){
		if(strcmp(cliente[l].nome,"")==0){

		}
		else
			printf("%d- %s\n",l,cliente[l].nome);

	}
	scanf("%d",&op);
	setbuf(stdin,NULL);
	strcpy(venda[iii].nome,cliente[op].nome);
	printf("%s deseja adquirir quais produtos?\n",venda[iii].nome);
	for(;;){
		for (l = 0; l < MAX; l++){
			if(strcmp(produto[l].nomeprod,"")==0){

			}
			else
				printf("%d- %s\n",l,produto[l].nomeprod);
		}
		scanf("%d",&op1);
		strcpy(venda[iii].nomeprod[iiii],produto[op1].nomeprod);
		strcpy(venda[iii].cartao,cliente[op].cartao);
		printf("Quantidade desejada do produto?\n");
		printf("quantidades disponiveis %d\n",produto[op1].qestq);
		do{
				scanf("%d",&op2);
		if(op2>produto[op1].qestq || op2==0){
			printf("Quantidade indisponivel, digite novamente\n");
				if(produto[op1].qestq==0){
					printf("Deseja sair?\n");
					scanf("%c",&sair);
					if (sair=='s'){
						break;
					}
				}
		}
		}while(op2>produto[op1].qestq || op2==0);
		produto[op].qestq-=op2;
		total += (produto[op1].vvenda*op2);
		setbuf(stdin,NULL);
		venda[iii].vvenda=total;
		printf("total da compra:%.2f \n",total);
		printf("Deseja comprar algo mais?\n");
		scanf("%c",&c);
		if(c=='n'){
			printf("venda efeituada com sucesso\n");
			getchar();
			break;
		}
	}
	
	getchar();

}
void vendadinheiro(){
	int l,op,op1,op2;
	float total=0,din;
	char c,sair;
	system("clear");
	printf("Selecione o cliente pelo numero antes de seu nome\n");
	for (l = 0; l < MAX; l++){
		if(strcmp(cliente[l].nome,"")==0){

		}
		else
			printf("%d- %s\n",l,cliente[l].nome);

	}
	scanf("%d",&op);
	setbuf(stdin,NULL);
	strcpy(venda[iii].nome,cliente[op].nome);
	printf("%s deseja adquirir quais produtos?\n",venda[iii].nome);
	for(;;){
		for (l = 0; l < MAX; l++){
			if(strcmp(produto[l].nomeprod,"")==0){

			}
			else
				printf("%d- %s\n",l,produto[l].nomeprod);
		}
		scanf("%d",&op1);
		strcpy(venda[iii].nomeprod[iiii],produto[op1].nomeprod);
		printf("Quantidade desejada do produto?\n");
		printf("quantidades disponiveis %d\n",produto[op1].qestq);
		do{
				scanf("%d",&op2);
		if(op2>produto[op1].qestq || op2==0){
			printf("Quantidade indisponivel, digite novamente\n");
			if(produto[op1].qestq==0){
				printf("Deseja sair?\n");
				scanf("%c",&sair);
				if(sair=='s'){
					break;
				}
			}
		}
		}while(op2>produto[op1].qestq || op2==0);
		produto[op1].qestq-=op2;
		total += (produto[op1].vvenda*op2);
		setbuf(stdin,NULL);
		printf("total da compra:%.2f \n",total);
		printf("Deseja comprar algo mais?\n");
		scanf("%c",&c);
		if(c=='n'){
			printf("Dinheiro:");
			do{
				scanf("%f",&din);
				if(din<total)
					printf("Digite um valor acima da compra:_");
			}while(din<total);
			printf("\nTroco: R$%.2f\n",din-total );
			getchar();
			break;
		}
	}
	
	getchar();

}
void vendacheque(){
	int l,op,op1,op2,cheque;
	float total=0;
	char c,sair;
	system("clear");
	printf("Selecione o cliente pelo numero antes de seu nome\n");
	for (l = 0; l < MAX; l++){
		if(strcmp(cliente[l].nome,"")==0){

		}
		else
			printf("%d- %s\n",l,cliente[l].nome);

	}
	scanf("%d",&op);
	setbuf(stdin,NULL);
	strcpy(venda[iii].nome,cliente[op].nome);
	printf("%s deseja adquirir quais produtos?\n",venda[iii].nome);
	for(;;){
		for (l = 0; l < MAX; l++){
			if(strcmp(produto[l].nomeprod,"")==0){

			}
			else
				printf("%d- %s\n",l,produto[l].nomeprod);
		}
		scanf("%d",&op1);
		strcpy(venda[iii].nomeprod[iiii],produto[op1].nomeprod);
		printf("Quantidade desejada do produto?\n");
		printf("quantidades disponiveis %d\n",produto[op1].qestq);
		do{
				scanf("%d",&op2);
		if(op2>produto[op1].qestq || op2==0){
			printf("Quantidade indisponivel, digite novamente\n");
			if(produto[op1].qestq==0){
				printf("Deseja sair?\n");
				scanf("%c",&sair);
					if(sair=='s'){
						break;
						break;
					}
			}
		}
		}while(op2>produto[op1].qestq || op2==0		);
		produto[op1].qestq-=op2;
		total += (produto[op1].vvenda*op2);
		setbuf(stdin,NULL);
		printf("total da compra:%.2f \n",total);
		printf("Deseja comprar algo mais?\n");
		scanf("%c",&c);
		if(c=='n'){
			printf("Digite o numero do cheque:_");
			scanf("%d",&cheque);
			printf("\nCompra efeituada com sucesso\n");
			getchar();
			break;
		}
	}
	
}
void vendafiado(){
	char s[11],s1[11],s2[11];
	setbuf(stdin,NULL);
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
	scanf("%[^\n]s",a);
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
	printf("Nome\tFornecedor\tData de fabricação\tData de validade\tValor de aquisição\tValor de venda\tQuantidade em estoque\n");
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
	printf("Digite o nome do produto:\n");
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