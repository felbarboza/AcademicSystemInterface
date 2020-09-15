#include "ListaDisciplinas.h"
#include <iostream>
using std::cout;
using std::endl;

ListaDisciplinas::ListaDisciplinas(int nd)
{
	numero_disc = nd;
	cont_disc = 0;
	pElDisciplinaPrim = NULL;
	pElDisciplinaAtual = NULL;
}
ListaDisciplinas::~ListaDisciplinas()
{
	ElDisciplina *paux1, *paux2;
	paux1 = pElDisciplinaPrim;
	paux2 = paux1;
	// Desaloca todos os elementos da lista
	while (paux1 != NULL)
	{
		paux2 = paux1->pProx;
		delete (paux1);
		paux1 = paux2;
	}
	pElDisciplinaPrim = NULL;
	pElDisciplinaAtual = NULL;
}
// inclui uma nova disciplina se houver espaco e a entrada for valida
void ListaDisciplinas::incluaDisciplina(Disciplina* pdi)
{
	ElDisciplina* paux;
	paux = new ElDisciplina();
	paux->setDisciplina(pdi);
	if (
		((cont_disc < numero_disc) && (pdi != NULL)) ||
		((numero_disc == -1) && (pdi != NULL))
		)
	{
		if (pElDisciplinaPrim == NULL)
		{
			pElDisciplinaPrim = paux;
			pElDisciplinaAtual = paux;
		}
		else
		{
			pElDisciplinaAtual->pProx = paux;
			paux->pAnte = pElDisciplinaAtual;
			pElDisciplinaAtual = paux;
		}
		cont_disc++;
	}
	else
	{
		cout << " Disciplina n�o inclu�da "
			<< " Quantia de disc. j� lotada em "
			<< numero_disc << " disciplinas." << endl;
	}
}
// percorre todos os elementos, mostrando-os em tela um a um
void ListaDisciplinas::listeDisciplinas()
{
	ElDisciplina* paux;
	paux = pElDisciplinaPrim;
	if (paux == NULL) {
		this->ListBox1->Items->Add("nenhuma disciplina cadastrada");
		return;
	}
	while (paux != NULL)
	{
		this->ListBox1->Items->Add(std::string(std::string(" Disciplina ") +  std::string(paux->getNome()) + std::string(" do Departamento ") + std::string(paux->getDepartamento()->getNome())).c_str());
		paux = paux->pProx;
	}
	cout << endl;
}
// localiza uma disciplina de nome "n" na lista de disciplinas
Disciplina* ListaDisciplinas::localizar(const char* n)
{
	ElDisciplina* paux;
	paux = pElDisciplinaPrim;
	while (paux != NULL)
	{
		if (0 == strcmp(n, paux->getNome()))
		{
			return paux->getDisciplina();
		}
		paux = paux->pProx;
	}
	return NULL;
}
ElDisciplina* ListaDisciplinas::getDisciplinaPrim() {
	return pElDisciplinaPrim;
}