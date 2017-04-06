#ifndef TAD_ALUNO_H_INCLUDED
#define TAD_ALUNO_H_INCLUDED
#include <string.h>
#include <stdlib.h>

typedef struct{
	int ra;
	char nome[50];
	float* notas;
	int qtdeNotas;  
}Aluno;

// DEFINA O PROTOTIPO E DESENVOLVA AS FUNCOES DESCRITAS A SEGUIR:


// Criar um aluno
Aluno* aluno_cria(int ra, char* nome,int qtdeNotas );

// Destruir (desalocar o espaco previamente alocado) um aluno
void aluno_libera(Aluno* aluno);

// Obter a media do aluno
float aluno_media(Aluno* aluno);

// Obter o primeiro nome do aluno
char* aluno_primeiro(Aluno* aluno);

// Obter o ultimo nome do aluno
char* aluno_segundo(Aluno* aluno);

// Comparar dois alunos pelo nome
//1 para igual
// 0 para diferente
int aluno_nomecompara(Aluno* aluno1, Aluno* aluno2);

// Comparar dois alunos pela media
int aluno_mediacompara(Aluno* aluno1, Aluno* aluno2);

// IMPLEMENTE AS FUNCOES AQUI
Aluno* aluno_cria(int ra, char* nome,int qtdeNotas ){
	
	Aluno* a = (Aluno*)malloc(sizeof(Aluno));
	a->notas = (float*)malloc(qtdeNotas*(sizeof(float)));
	
	a->ra = ra;
	strcpy(a->nome,nome);
	a->qtdeNotas = qtdeNotas;
	
	return a;

}

void aluno_libera(Aluno* aluno){
	
	free(aluno->notas);
	free(aluno);
	
}

float aluno_media(Aluno* aluno){
	float media = 0;
	
	int i = 0;
	for(i = 0; i<aluno->qtdeNotas; i++){

		media = media+aluno->notas[i];
	}
	media = media/aluno->qtdeNotas;
	return media;
	
}

// Obter o primeiro nome do aluno
char* aluno_primeiro(Aluno* aluno){
	int i = 0;
	char* primeiro = (char*)malloc(sizeof(char));
	for(i =0; aluno->nome[i] != ' ' ;i++){
		
		primeiro[i] = aluno->nome[i];
		
		
	}
	primeiro[i] = '\0';
	//printf("%s", primeiro);
	
	return primeiro;
	
}

char* aluno_segundo(Aluno* aluno){
	int i = 0;
	for(i=0; aluno->nome[i] != ' ';i++);
	i++;
	char* segundo = (char*)malloc(sizeof(char));
	int j = 0;
	
	while(aluno->nome[i] != '\0' && aluno->nome[i] != ' '){
		
		segundo[j] = aluno->nome[i];
		i++;
		j++;
		
	}
	segundo[j] = '\0';
	
	return segundo;
	
}

// Comparar dois alunos pelo nome
//0 Diferente
// 1 Igual
int aluno_nomecompara(Aluno* aluno1, Aluno* aluno2){
	
	int i =0;
	for(i= 0; aluno1->nome[i] != '\0' ; i++){
			
		if(aluno1->nome[i] != aluno2->nome[i]){
			
			return 0;
			
		}
		
	}
	
	return 1;
	
}

// Comparar dois alunos pela media
// -1 Menor
//0 - Igual
//1 -maior
int aluno_mediacompara(Aluno* aluno1, Aluno* aluno2){
	
	if(aluno_media(aluno1) > aluno_media(aluno2) ){
		return 1;
		
	}else if(aluno_media(aluno1) < aluno_media(aluno2) ){
		
		return -1 ;
		
	}else{
		
		return 0;
		
	}
	
}

#endif ///TAD_ALUNO_H_INCLUDED
