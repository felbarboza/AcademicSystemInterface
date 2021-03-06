#pragma once
#include <iostream>
#include <list>
#include "Universidade.h"

class ListaUniversidades
{
private:
public:
	ListaUniversidades(int nd = 1000);
	~ListaUniversidades();
	void incluaUniversidade(Universidade* pdi);
	Universidade* localizar(const char* univ);
	std::list<Universidade*> LUniversidades;
    std::list<Universidade*>::iterator IteradorLUniversidades;
};