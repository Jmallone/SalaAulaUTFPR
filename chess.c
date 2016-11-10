#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
void mostrar(char T[11][21]){
	int i, j;
	for(i = 0;i < 11;i++){
		for(j = 0;j < 21;j++){
			printf("%c", T[i][j]);
		}
		printf("\n");
		
	}

}

void inserir(char T[11][21], int x, int y, int a, int b){
	T[a][b] = T[x][y];
	T[x][y] = '_';
}

void interprete(char T[11][21],int x, char y, int a, char b){

	switch ( x )
	  {
		 case 8 :
		   x = 0;
		 break;
	 
		 case 7 :
		   x = 1;
		 break;
	 
		 case 6 :
			x = 2;
		 break;
	 
		 case 5 :
			x = 3;
		 break;
	 
		 case 4 :
			x = 4;
		 break;
	 
		 case 3 :
			x = 5;
		 break;
	 
		 case 2 :
			x = 6;
		 break;
		 
		 case 1 :
			x = 7;
		 break;
	 
		 default :
		   printf ("Valor invalido!\n");
	  }
	  
	  	switch ( a )
	  {
		 case 8 :
		   a = 0;
		 break;
	 
		 case 7 :
		   a = 1;
		 break;
	 
		 case 6 :
			a = 2;
		 break;
	 
		 case 5 :
			a = 3;
		 break;
	 
		 case 4 :
			a = 4;
		 break;
	 
		 case 3 :
			a = 5;
		 break;
	 
		 case 2 :
			a = 6;
		 break;
		 
		 case 1 :
			a = 7;
		 break;
	 
		 default :
		   printf ("Valor invalido!\n");
	  }
	  int y_n, b_n;
	  	switch ( y )
	  {
		 case 'a' :
		   y_n = 1 ;
		 break;
	 
		 case 'b' :
		   y_n = 3;
		 break;
	 
		 case 'c' :
			y_n = 5;
		 break;
	 
		 case 'd' :
			y_n = 7;
		 break;
	 
		 case 'e' :
			y_n = 9;
		 break;
	 
		 case 'f' :
			y_n = 11;
		 break;
	 
		 case 'g' :
			y_n = 13;
		 break;
		 
		 case 'h' :
			y_n = 15;
		 break;
	 
		 default :
		   printf ("Valor invalido!\n");
	  }
	  
	  	switch ( b )
	  {
		 case 'a' :
		   b_n = 1 ;
		 break;
	 
		 case 'b' :
		   
		   b_n = 3;
		 break;
	 
		 case 'c' :
			b_n = 5;
		 break;
	 
		 case 'd' :
			b_n = 7;
		 break;
	 
		 case 'e' :
			b_n = 9;
		 break;
	 
		 case 'f' :
			b_n = 11;
		 break;
	 
		 case 'g' :
			b_n = 13;
		 break;
		 
		 case 'h' :
			b_n = 15;
		 break;
	 
		 default :
		   printf ("Valor invalido!\n");
	  }
	  inserir(T,x,y_n,a,b_n);
}

int main(){
	char table[11][21] = {

  "|T|C|B|Q|R|B|C|T| 8", 
  "|P|P|P|P|P|P|P|P| 7",
  "|_|_|_|_|_|_|_|_| 6",
  "|_|_|_|_|_|_|_|_| 5",
  "|_|_|_|_|_|_|_|_| 4", 
  "|_|_|_|_|_|_|_|_| 3",
  "|p|p|p|p|p|p|p|p| 2",
  "|t|c|b|q|r|b|c|t| 1",
  "-----------------  ",
  " a b c d e f g h "                       
	};
	system("cls || clear");
	mostrar(table);
	int a,x;
	char b,y;
	while(1){
		printf("Posição da Origem(Linha,Coluna): ");
		scanf("%d%c", &x ,&y);
		printf("Posição Destino(Linha,Coluna): ");
		scanf("%d%c",&a ,&b);
		interprete(table,x,y,a,b);
		//inserir(table,x,y,a,b);
		system("cls || clear");
		mostrar(table);
	}
	return 0;
	
}
