#include <stdio.h>
#include <stdlib.h>
//Fazer forca.h
int cont_palavra(char v[]){
	int i = 0;
	for(i = 0; v[i] != '\0'; i++ );
	return i;
}

void s_palavra(char v[], char letra, char under[]){
	int i = 0;
	for(i = 0; v[i] != '\0'; i++ ){
		if(v[i] == letra){
			printf(" %d", i);
			under[i] = letra;
		}
	}
	printf("\n");
	//Ver em que casas as palavras estão;
}

void inserir(char v[], int n){

	int i = 0;
	for(i = 0; i < n; i++ ){
		v[i] = '_';
	}
	v[i] = '\0';

}

void imprimir(char v[]){

	int i = 0;
	for(i = 0; v[i] != '\0' ;i++){

		printf("%c ",v[i]);

	}
}

int verifica_under(char v[]){
    int i =0;
    for(i = 0;v[i] != '\0';i++){

        if(v[i] == '_'){
            return 1;
        }
    }

}

int main(){
	char v[] = "abacaxi";
	char under[30];
	under[0] = 'q';
	int a = 0;
	char l;
 	inserir(under, cont_palavra(v));
	imprimir(under);

 	while(verifica_under(under)){
		printf("Digite uma Letra:\n");
		scanf("%c", &a);
		setbuf(stdin, NULL);

        system("clear || cls");

	 	s_palavra(v, a, under);
		printf("\n");
		imprimir(under);
	}
 	/*desenha_under(cont_palavra(v),&under);
 	printf("V2: %c \n",under[0] );
	/*scanf("%d", &a);
	printf("Numero: %d \n",a );
	printf("Palavra: %s\n", v );*/

return 0;
}
