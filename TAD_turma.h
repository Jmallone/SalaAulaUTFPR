#ifndef TAD_TURMA_H_INCLUDED
#define TAD_TURMA_H_INCLUDED
#include "TAD_aluno.h"
#include <stdlib.h>
#include <string.h>

typedef struct{
	char codigo[10];
	Aluno** vetAlunos;
	int tamVetor;
	int matriculados;
}Turma;

// DEFINA O PROTOTIPO E DESENVOLVA AS FUNCOES DESCRITAS A SEGUIR:


// Criar uma turma
Turma* criar_turma(char* codigo, int tamVetor ){
	
	Turma* t = (Turma*)malloc(sizeof(Turma));

	t->matriculados = 0;
	strcpy (t->codigo,codigo);
	t->tamVetor = tamVetor;
	
	t->vetAlunos = (Aluno**)malloc(tamVetor*(sizeof(Aluno*)));

	
	
	return t;
}

// Destruir (desalocar o espaco previamente alocado) uma turma
void deletar_turma(Turma* t){
	
	/*int i = 0;
	
	for(i = 0; i < t->matriculados;i++){
		free(t->vetAlunos[i]->notas);
	 }*/

	free(t->vetAlunos);
	free(t);
	t->matriculados = 0;
	
	
	
}
// Matricular um aluno
// 1 se deu certo 0 se deu errado
int matricular_turma(Turma* t,Aluno* a){

	if((t->matriculados) < (t->tamVetor)){

		t->vetAlunos[t->matriculados] = a;
		t->matriculados++;

		return 1;
	}else{

		return 0;
	}

}
// Cancelar matricula de um aluno
int cancelMatricula_turma(Turma* t, int r){
	int j = 0;
	int i = 0;
	for(i++;(t->vetAlunos[i]->ra) == r ; i++ ) {
	}
	
	for(j = i-1; j < (t->matriculados) ; j++){
		
		t->vetAlunos[j] = t->vetAlunos[j+1];
	}
	t->matriculados = t->matriculados - 1;
}
// Imprimir os alunos matriculados
void imprimir_turma(Turma* t){
	int i = 0;
	for(i = 0 ;i < t->matriculados ;i++){
		printf("\n Aluno[%d] = %s", i, t->vetAlunos[i]->nome);
		
	}
	
}
// Obter a media da turma
float media_turma(Turma* t){
	int i = 0;
	float media = 0;
	for(i = 0; i < t->matriculados ;i++){
		
		media = media + aluno_media(t->vetAlunos[i]);
		
	}
	media  = media/t->matriculados;
	return media;
}
// Verificar se um determinado aluno esta matriculado (RA)
//1 se estar 0 se nao estar
int verificaMatricula_turma(Turma* t, int r){
	int i = 0;
	
	for(i++; i< (t->matriculados) ; i++ ) {
		if((t->vetAlunos[i]->ra) == r){
			return 1;
		}
	}
	return 0;
}
// Ordenar alunos por ordem alfabetica

// Ordenar alunos por media







#endif ///TAD_TURMA_H_INCLUDED
