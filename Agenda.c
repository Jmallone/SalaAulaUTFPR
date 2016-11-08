#include <stdio.h>
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
		scanf("%d", P[i].End.numero);

		B;
		printf("\n");


	}

}
int main(){
	s_pessoa Pessoa[T]; //100 <--
	inserir_Pessoas(Pessoa);

}
