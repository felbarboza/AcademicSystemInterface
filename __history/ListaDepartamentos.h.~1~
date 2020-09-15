#pragma once
#include "ElDepartamento.h"
#include "Departamento.h"

class ListaDepartamentos
{
private:
	int cont_disc;
	int numero_disc;
	ElDepartamento *pElDepartamentoPrim;
	ElDepartamento *pElDepartamentoAtual;
public:
	ListaDepartamentos(int nd = 1000);
	~ListaDepartamentos();
	void incluaDepartamento(Departamento* pdi);
	void listeDepartamentos();
	Departamento* localizar(char* n);
	ElDepartamento* getDepartamentoPrim();
};