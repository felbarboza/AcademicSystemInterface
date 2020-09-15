#pragma once
#include "ElUniversidade.h"
#include "Universidade.h"

class ListaUniversidades
{
private:
	int cont_disc;
	int numero_disc;
	ElUniversidade *pElUniversidadePrim;
	ElUniversidade *pElUniversidadeAtual;
public:
	ListaUniversidades(int nd = 1000);
	~ListaUniversidades();
	void incluaUniversidade(Universidade* pdi);
	void listeUniversidades();
	Universidade* localizar(char* n);
	ElUniversidade* getUniversidadePrim();
};