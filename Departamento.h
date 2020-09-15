#pragma once
class Universidade;
class Disciplina;
class ListaDisciplinas;

class Departamento
{
private:
	char nome[130];
	Universidade* pUniv;
	ListaDisciplinas* pObjLDisciplinas;
	int id;
public:
	Departamento(int id);
	~Departamento();
	void setNome(const char* n);
	const char* getNome();
	void setUniversidade(Universidade* pu);
	Universidade* getUniversidade();
	void incluaDisciplina(Disciplina* pdi);
	void listeDisciplinas();
	int getId();
};