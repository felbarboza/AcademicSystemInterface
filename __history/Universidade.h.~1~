#pragma once
#include "ListaDepartamentos.h"

class Universidade
{
private:
	char nome[130];
	ListaDepartamentos ObjLDepartamentos;
	int id;
public:
	Universidade(int id);
	~Universidade();
	void setNome(const char* n);
	const char* getNome();
	void incluaDepartamento(Departamento* pd);
	void listeDepartamentos();
	int getId();
};