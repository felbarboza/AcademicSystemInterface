#include "Departamento.h"
#include "ListaDisciplinas.h"
#include "Universidade.h"
#include "Disciplina.h"
#include <string.h>

// construtora e destrutora
Departamento::Departamento(int Id)
{
	id = Id;
	pObjLDisciplinas = new ListaDisciplinas(-1);
}
Departamento::~Departamento()
{
	if (pObjLDisciplinas)
	{
		delete pObjLDisciplinas;
	}
}
// sets e gets
void Departamento::setNome(const char* n)
{
	strcpy(nome, n);
}
const char* Departamento::getNome()
{
	return nome;
}
void Departamento::setUniversidade(Universidade* pu)
{
	pUniv = pu;
}
Universidade* Departamento::getUniversidade()
{
	return pUniv;
}
int Departamento::getId() {
	return id;
}

// metodos de inclusao na lista e de listagem
void Departamento::incluaDisciplina(Disciplina* pdi)
{
	pObjLDisciplinas->incluaDisciplina(pdi);
	pdi->setDepartamento(this);
}
void Departamento::listeDisciplinas()
{
	pObjLDisciplinas->listeDisciplinas();
}