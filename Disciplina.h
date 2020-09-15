#pragma once
#include "Departamento.h"
#include "ListaAlunos.h"

class Disciplina
{
private:
	int id;
	char nome[150];
	char area_conhecimento[150];
	Departamento* pDeptoAssociado;
	ListaAlunos ObjLAlunos;
public:
	Disciplina(int id, int tamanho_lista = 45, const char* ac = "");
	~Disciplina();
	void setId(int i);
	int getId();
	void setNome(const char* n);
	const char* getNome();
	void setDepartamento(Departamento* pd);
	Departamento* getDepartamento();
	void incluaAluno(Aluno* pa);
	void listeAlunos();
};