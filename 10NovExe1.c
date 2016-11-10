#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#define T 3
#define B setbuf(stdin, NULL);

typedef struct NIP
{
    char nome[40];
    int idade;
    float peso;

} s_nip;

void primeiraLetra(s_nip *P){


	char letra;
	B;
	printf("\n Digite uma Letra: ");
	scanf("%c", &letra );


	int i =0;
	printf("---- Pessoas Encontradas ----\n");
	for(i = 0; i < T ; i++){


		if(letra == P[i].nome[0]){

			printf("Nome: %s \n", P[i].nome);

		}

	}

}

void maisVelha(s_nip *P){

	int y = P[0].idade;
	int tmp = 0;

	int i = 0;
	for(i = 0; i < T ; i++){

		
		if(y <= P[i].idade){

			y = P[i].idade;
			tmp = i;
		}


	}

	printf("\nA Pessoa mais velha: %s \n", P[tmp].nome);


}

void inserirP(s_nip  *P){
	int i =0;
	for( i = 0; i < T;i++){

		B;
		printf("Digite o [%d]Nome da Pessoa: ", i);
		scanf("%[^\n]", P[i].nome);

		B;
		printf("Digite a [%d]Idade: ", i);
		scanf("%d", &P[i].idade);

		B;
		printf("Digite a [%d]Peso: ", i);
		scanf("%f", &P[i].peso);

	}

}

int main(){
	s_nip Pessoas[T]; //<-7
	inserirP(Pessoas);
	maisVelha(Pessoas);
	primeiraLetra(Pessoas);
	
	return 0;

}
