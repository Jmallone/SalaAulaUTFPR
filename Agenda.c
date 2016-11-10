#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#define T 3
#define B setbuf(stdin, NULL);
typedef struct endereco{

	char rua[50];
	int numero;
	char complemento[50];
	char bairro[50];
	int cep;
	char cidade[50];
	char estado[50];
	char pais[50];

}s_end;

typedef struct telefone{
	
	int ddd;
	int numero;

}s_tel;

typedef struct aniversario{

	int dia;
	int mes;
	int ano;

} s_niver;

typedef struct pessoa{

	char nome[50];
	char email[50];
	char observacao[50];
	s_end End;
	s_tel Tel;
	s_niver Niver;

}s_pessoa;

void inserir_Pessoas(s_pessoa *P){

	int i = 0;
	for(i = 0; i<T ;i++){

		B;
		printf("Digite o [%d]Nome: ",i );
		scanf("%[^\n]",P[i].nome);

		B;
		printf("Digite o [%d]Email: ",i );
		scanf("%[^\n]", P[i].email);

		B;
		printf("Digite a [%d]Obs: ", i );
		scanf("%[^\n]", P[i].observacao);

		B;
		printf("Digite [%d]Rua: ", i);
		scanf("%[^\n]", P[i].End.rua);

		B;
		printf("Digite [%d]Numero: ", i);
		scanf("%d", &P[i].End.numero);

		B;
		printf("Digite [%d]Complemento: ", i);
		scanf("%[^\n]", P[i].End.complemento);
		
		B;
		printf("Digite [%d]Bairro: ", i);
		scanf("%[^\n]", P[i].End.bairro);
		
		B;
		printf("Digite [%d]CEP: ", i);
		scanf("%d", &P[i].End.cep);
		
		B;
		printf("Digite [%d]Cidade: ", i);
		scanf("%[^\n]", P[i].End.cidade);

		B;
		printf("Digite [%d]Estado: ", i);
		scanf("%[^\n]", P[i].End.estado);
		
		B;
		printf("Digite [%d]Pais: ");
		scanf("%[^\n]", P[i].End.pais);
		
		B; 
		printf("Digite o [%d]DDD: ", i);
		scanf("%d", &P[i].Tel.ddd);
		
		B;
		printf("Digite o [%d]Numero: ", i);
		scanf("%d", &P[i].Tel.numero);
		
		B;
		printf("Digite o [%d]Dia do Aniversario: ", i);
		scanf("%d", &P[i].Niver.dia);
		
		B;
		printf("Digite o [%d]Mes do Aniversario: ", i);
		scanf("%d", &P[i].Niver.mes);
		
		B;
		printf("Digite o [%d]Ano do Aniversario: ", i);
		scanf("%d", &P[i].Niver.ano);
		system("cls"); 
		}

}

void mostrarPessoa(s_pessoa *P, int num){

	int i = num;

		B;
		printf("\nNome: %s",P[i].nome);

		B;
		printf("\nEmail: %s", P[i].email);

		B;
		printf("\nObs: %s", P[i].observacao);

		B;
		printf("\nRua: %s", P[i].End.rua);

		B;
		printf("\nNumero: %d", P[i].End.numero);

		B;
		printf("\nComplemento: %s", P[i].End.complemento);
		
		B;
		printf("\nBairro: %s", P[i].End.bairro);
		
		B;
		printf("\nCEP: %d", P[i].End.cep);
		
		B;
		printf("\nCidade: %s", P[i].End.cidade);

		B;
		printf("\nEstado: %s", P[i].End.estado);
		
		B;
		printf("\nPais: %s", P[i].End.pais);
		
		B; 
		printf("\nDDD: %d", P[i].Tel.ddd);
		
		B;
		printf("\nNumero: %d", P[i].Tel.numero);
		
		B;
		printf("\nDia do Aniversario: %d", P[i].Niver.dia);
		
		B;
		printf("\nMes do Aniversario: %d", P[i].Niver.mes);
		
		B;
		printf("\nAno do Aniversario: %d", P[i].Niver.ano);

}

int procuraPessoa(s_pessoa *P){
	char nome_s[50];
	int comp;
	B;
	printf("\n Digite o Nome que quer procurar: ");
	scanf("%[^\n]", nome_s);
	
	
	printf("\n------ Contatos Encontrados: ------\n");
	int i = 0;
	for(i = 0;i < T;i++){
		if(strcmp(nome_s, P[i].nome) == 0){
			mostrarPessoa(P,i);
			printf("\n------------------\n");
			
			
		}
		
	}
	
}

int procuraMes(s_pessoa *P){
	int mes_s;
	B;
	printf("\n Digite o mes que quer procurar: ");
	scanf("%d", &mes_s);
	
	printf("\n------ Contatos Encontrados: ------\n");
	int i = 0;
	for(i = 0;i < T;i++){
		
		if(mes_s == P[i].Niver.mes){
			mostrarPessoa(P,i);
			printf("\n------------------\n");
		}
	
	}
		
}

int procuraMesDia(s_pessoa *P){
	int mes_s;
	int dia_s;
	B;
	printf("\n Digite o mes e Dia que quer procurar: ");
	scanf("%d %d", &mes_s, &dia_s );
	
	printf("\n------ Contatos Encontrados: ------\n");
	int i = 0;
	for(i = 0;i < T;i++){
		
		if(mes_s == P[i].Niver.mes && dia_s == P[i].Niver.dia ){
			mostrarPessoa(P,i);
			printf("\n------------------\n");
		}
	
	}
		
}

int main(){
	s_pessoa Pessoa[T]; //100 <--
	inserir_Pessoas(Pessoa);
	//procuraPessoa(Pessoa);
	//procuraMes(Pessoa);
	procuraMesDia(Pessoa);
	
}
