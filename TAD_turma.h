#ifndef TAD_TURMA_H_INCLUDED
#define TAD_TURMA_H_INCLUDED
#include "TAD_aluno.h"
#include <stdlib.h>

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
	t->tamVetor = tamVetor;
	
	t->vetAlunos = (Aluno**)malloc(tamVetor*sizeof(Aluno*));

	
	
	return t;
}

// Destruir (desalocar o espaco previamente alocado) uma turma
void deletar_turma(Turma* t){
	int i = 0;
	
	for(i = 0; i < t->matriculados;i++){
		free(t->vetAlunos[i]->notas);
		
	}
	free(t->vetAlunos);
	free(t);
	t->matriculados = 0;
	
	
	
}
// Matricular um aluno

// Cancelar matricula de um aluno

// Imprimir os alunos matriculados

// Obter a media da turma

// Verificar se um determinado aluno esta matriculado (RA)

// Ordenar alunos por ordem alfabetica

// Ordenar alunos por media







#endif ///TAD_TURMA_H_INCLUDED
