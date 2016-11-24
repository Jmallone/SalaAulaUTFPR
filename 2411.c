

#include <stdio.h>
#define T 20
#include <stdlib.h>
void preencher(int M[][T]){

	int i =0;
	int j = 0;
	for(i = 0;i < T;i++){

		for(j = 0; j < T; j++){

			M[i][j] = (rand() % 10);

		}

	}

}
void mostrar(int M[][T]){
	int i =0; int j = 0;

	for(i= 0;i < T; i++){

		for(j = 0;j< T;j++){
			printf(" %d ",M[i][j]);
		}
		printf("\n");


	}

}

void somarLinha(int M[][T]){

	int total = 0;
	int i =0; int j = 0;

	for(i= 0;i < T; i++){

		for(j = 0;j< T;j++){
			total = total+M[i][j];
		}
		printf("Linha 1: %d \n", total);
		total = 0;


	}
}

void somarLinha2(int M[][T], int ini,int final, int base){

	int total = 0;
	int i =0; int j = 0;

	for(i= 0;i < 5; i++){

		for(j = 0;j< 5;j++){
			total = total+M[i][j];
		}
		printf("Linha 1: %d \n", total);
		total = 0;


	}
}

void somarLinha3(int M[][T]){

	int total = 0;
	int total2 = 0;
	int i =0; int j = 0;

		for(i= 0;i < 5; i++){

			for(j = 0;j< 5;j++){
				total = total+M[i][j];
			}
			printf("Linha 1: %d \n", total);
			total2 = total2+total;
			total = 0;


		}






		printf("\n TOTAL: %d\n", total2);

}

void somarColuna(int M[][T]){

	int total = 0;
	int i =0; int j = 0;

	for(i= 0;i < T; i++){

		for(j = 0;j< T;j++){
			total = total+M[j][i];
		}
		printf("Coluna 1: %d \n", total);
		total = 0;


	}
}

int main(){
	
	int Matriz[T][T];
	preencher(Matriz);
	//somarLinha(Matriz);
	//somarColuna(Matriz);

	somarLinha3(Matriz);
	mostrar(Matriz);

	return 0;
}
