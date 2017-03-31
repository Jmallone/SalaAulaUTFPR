#ifndef TAD_DATA_H_INCLUDED
#define TAD_DATA_H_INCLUDED
#include <stdlib.h>

typedef struct{
        int d;
        int m;
        int y;
}Data;

//Criar uma data
Data* data_cria(int d, int m, int y);

// Libera o espaco alocado de uma data
void data_libera(Data* data);

//Recuperar a data no formato brasileiro
// Copia a data na string str recebida por parametro
// Devolve 1 se conseguir copiar a data e 0 caso contrario
int data_getBr(Data *data, char* str);


//Recuperar a data no formato brasileiro por extenso
// Cria a string e copia a data por extenso 
// Devolve o endereco da string criada
char* data_getBrExtenso(Data *data);


//Recuperar a data no formato americano
// Copia a data na string str recebida por parametro
// Devolve 1 se conseguir copiar a data e 0 caso contrario
int data_getUs(Data *data, char* str);

//Altera a data recebida por parâmetro
// Devolve 1 para sucesso e 0 para fracasso
int data_set(Data *data, int d, int m, int y);

//Altera o dia da data recebida por parâmetro
// Devolve 1 para sucesso e 0 para fracasso
int data_setDia(Data *data, int d);

//Altera o mes da data recebida por parâmetro
// Devolve 1 para sucesso e 0 para fracasso
int data_setMes(Data *data, int m);

//Altera o ano da data recebida por parâmetro
// Devolve 1 para sucesso e 0 para fracasso
int data_setAno(Data *data, int y);

//Recuperar somente o dia 
int data_getDia(Data *data);

//Recuperar somente o mes 
int data_getMes(Data *data);

//Recuperar somente o ano
int data_getAno(Data *data);

// Valida uma data
// Devolve 1 para valida e 0 para invalida
int data_valida(Data* data);


// Compara duas datas
// Devolve -1 se data1 for MENOR que data2
// Devolve 0 se data1 for IGUAL que data2
// Devolve 1 se data1 for MAIOR que data2
int data_compara(Data* data1, Data* data2);



// IMPLEMENTE AS FUNCOES AQUI

Data* data_cria(int d, int m, int y){
    Data* data = (Data*) malloc(sizeof(Data));

    data->d = d;
    data->m = m;
    data->y = y;

    return data;
}

void data_libera(Data* data){

	free(data);

}

int data_getBr(Data *data, char* str){

	if(data==NULL) return 0;
	if(str==NULL) return 0;

	sprintf(str, "%d/%02d/%d", data->d, data->m,data->y);
	return 1;
}

//Recuperar a data no formato brasileiro por extenso
// Cria a string e copia a data por extenso 
// Devolve o endereco da string criada
char* data_getBrExtenso(Data *data){


	char* str =  (char*) malloc(25*(sizeof(char)));
	char* mes = (char*)malloc(25*sizeof(char)) ;
	

	switch(data->m){
		case 1:
			mes = "Janeiro";
		break;
		
		case 2:
			mes = "Fevereiro";
		break;
		
		case 3:
			mes = "Março";
		break;
		
		case 4:
			mes = "Abril";
		break;
		
		case 5:
			mes = "Maio";
		break;
		
		case 6:
			mes = "Junho";
		break;
		
		case 7:
			mes = "Julho";
		break;
		
		case 8:
			mes = "Agosto";
		break;
		
		case 9:
			mes = "setembro";
		break;
		
		case 10:
			mes = "Outubro";
		break;
		
		case 11:
			mes = "Novembro";
		break;
		
		case 12:
			mes = "Dezembro";
		break;
		
	}
	sprintf(str,"%02d de %s de %d", data->d, mes , data->y);
	
	return str;
}

//Recuperar a data no formato americano
// Copia a data na string str recebida por parametro
// Devolve 1 se conseguir copiar a data e 0 caso contrario
int data_getUs(Data *data, char* str){
	
	if(data==NULL) return 0;
	if(str==NULL) return 0;
	
	sprintf(str, "%02d/%02d/%d", data->m, data->d,data->y);
	return 1;
	
}

//Altera a data recebida por parâmetro
// Devolve 1 para sucesso e 0 para fracasso
int data_set(Data *data, int d, int m, int y){
	
	if(data==NULL) return 0;
	
	data->d = d;
	data->m = m;
	data->y = y;
	
}

//Altera o dia da data recebida por parâmetro
// Devolve 1 para sucesso e 0 para fracasso
int data_setDia(Data *data, int d){
	
	data->d = d;
	
}

//Altera o mes da data recebida por parâmetro
// Devolve 1 para sucesso e 0 para fracasso
int data_setMes(Data *data, int m){
	
	data->m = m;
	
}

//Altera o ano da data recebida por parâmetro
// Devolve 1 para sucesso e 0 para fracasso
int data_setAno(Data *data, int y){
	
	data->y = y;
	
}

//Recuperar somente o dia 
int data_getDia(Data *data){
	
	return data->d;
	
}

//Recuperar somente o mes 
int data_getMes(Data *data){
	
	return data->m;
	
}
//Recuperar somente o ano
int data_getAno(Data *data){
	
	return data->y;
	
}

// Valida uma data
// Devolve 1 para valida e 0 para invalida
int data_valida(Data* data){
	
	if((data->d)>31 || (data->d)<1 ) return 0;
	if((data->m)>12 || (data->m)<1) return 0;
	if((data->y)>10000 || (data->y)< 0) return 0;
	 
	return 1;
	
	
}


// Compara duas datas
// Devolve -1 se data1 for MENOR que data2
// Devolve 0 se data1 for IGUAL que data2
// Devolve 1 se data1 for MAIOR que data2
int data_compara(Data* data1, Data* data2){
	
	if( (data1->y) > (data2->y) ){
		
		return 1;
		
		
	}else{
		
		if((data1->m) > (data2->m)){
		
			if((data1->d) > (data2->d)){
				
				return 1;
				
			}
		}
		return -1;
		
	}
	
}
#endif ///TAD_DATA_H_INCLUDED
