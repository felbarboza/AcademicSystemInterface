#pragma once
#include "ElDisciplina.h"
#include "Disciplina.h"

class ListaDisciplinas
{
private:
	int cont_disc;
	int numero_disc;
	ElDisciplina *pElDisciplinaPrim;
	ElDisciplina *pElDisciplinaAtual;
public:
	ListaDisciplinas(int nd = 1000);
	~ListaDisciplinas();
	void incluaDisciplina(Disciplina* pdi);
	void listeDisciplinas();
	Disciplina* localizar(char* n);
	ElDisciplina* getDisciplinaPrim();
};