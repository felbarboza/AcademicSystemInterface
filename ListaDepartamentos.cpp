#include "ListaDepartamentos.h"
#include "Universidade.h"
#include <fstream>
#include <iostream>
using std::cout;
using std::endl;

ListaDepartamentos::ListaDepartamentos(int nd)
{
	numero_disc = nd;
	cont_disc = 0;
	pElDepartamentoPrim = NULL;
	pElDepartamentoAtual = NULL;
}
ListaDepartamentos::~ListaDepartamentos()
{
	ElDepartamento *paux1, *paux2;
	paux1 = pElDepartamentoPrim;
	paux2 = paux1;
	// Desaloca todos os elementos da lista
	while (paux1 != NULL)
	{
		paux2 = paux1->pProx;
		delete (paux1);
		paux1 = paux2;
	}
	pElDepartamentoPrim = NULL;
	pElDepartamentoAtual = NULL;
}
// inclui um novo departamento se houver espaco e a entrada for valida
void ListaDepartamentos::incluaDepartamento(Departamento* pdi)
{
	ElDepartamento* paux;
	paux = new ElDepartamento();
	paux->setDepartamento(pdi);
	if (
		((cont_disc < numero_disc) && (pdi != NULL)) ||
		((numero_disc == -1) && (pdi != NULL))
		)
	{
		if (pElDepartamentoPrim == NULL)
		{
			pElDepartamentoPrim = paux;
			pElDepartamentoAtual = paux;
		}
		else
		{
			pElDepartamentoAtual->pProx = paux;
			paux->pAnte = pElDepartamentoAtual;
			pElDepartamentoAtual = paux;
		}
		cont_disc++;
	}
	else
	{
		cout << " Departamento não incluída "
			<< " Quantia de disc. já lotada em "
			<< numero_disc << " Departamentos." << endl;
	}
}
// percorre todos os elementos, mostrando-os em tela um a um
void ListaDepartamentos::listeDepartamentos()
{
	ElDepartamento* paux;
	paux = pElDepartamentoPrim;
	if (paux == NULL) {
		this->ListBox1->Items->Add("nenhum departamento cadastrada");
		return;
	}
	while (paux != NULL)
	{
		this->ListBox1->Items->Add(std::string(
		std::string(" Departamento ") +
		std::string(paux->getNome()) +
		std::string(" da universidade ") +
		std::string(paux->getUniversidade()->getNome())).c_str());
		paux = paux->pProx;
	}
	cout << endl;
}
// localiza uma universidade de nome "n" na lista de universidades
Departamento* ListaDepartamentos::localizar(const char* n)
{
	ElDepartamento* paux;
	paux = pElDepartamentoPrim;
	while (paux != NULL)
	{
		if (0 == strcmp(n, paux->getNome()))
		{
			return paux->getDepartamento();
		}
		paux = paux->pProx;
	}
	return NULL;
}
ElDepartamento* ListaDepartamentos::getDepartamentoPrim() {
	return pElDepartamentoPrim;
}