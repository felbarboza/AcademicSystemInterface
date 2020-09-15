#include "ListaAlunos.h"
#include "Disciplina.h"
#include <fstream>
using std::ofstream;
using std::ifstream;
#include <iostream>
using std::cout;
using std::endl;

ListaAlunos::ListaAlunos(int na)
{
	numero_alunos = na;
	cont_alunos = 0;
	pElAlunoPrim = NULL;
	pElAlunoAtual = NULL;
}
ListaAlunos::~ListaAlunos()
{
	ElAluno *paux1, *paux2;
	paux1 = pElAlunoPrim;
	paux2 = paux1;
	// Desaloca todos os elementos da lista
	while (paux1 != NULL)
	{
		paux2 = paux1->pProx;
		delete (paux1);
		paux1 = paux2;
	}
	pElAlunoPrim = NULL;
	pElAlunoAtual = NULL;
}
// inclui um novo aluno se houver espaco e a entrada for valida
void ListaAlunos::incluaAluno(Aluno* pa)
{
	ElAluno* paux;
	paux = new ElAluno();
	paux->setAluno(pa);
	if ((cont_alunos < numero_alunos) && (pa != NULL))
	{
		if (pElAlunoPrim == NULL)
		{
			pElAlunoPrim = paux;
			pElAlunoAtual = paux;
		}
		else
		{
			pElAlunoAtual->pProx = paux;
			paux->pAnte = pElAlunoAtual;
			pElAlunoAtual = paux;
		}
		cont_alunos++;
	}
	else
	{
		cout << "Aluno n�o inclu�do. Turma j� lotada em "
			<< numero_alunos << " alunos." << endl;
	}
}
// percorre todos os elementos, mostrando-os em tela um a um
void ListaAlunos::listeAlunos()
{
	ElAluno* paux = NULL;
	paux = pElAlunoPrim;
	if (paux == NULL) {
		this->ListBox1->Items->Add("nenhum aluno cadastrado");
		return;
	}
	while (paux != NULL)
	{
		this->ListBox1->Items->Add(std::string(std::string(" Aluno ") + std::string(paux->getNome()) + std::string(" matriculado na Disciplina ") + std::string(paux->getDisciplina()->getNome())).c_str());
		paux = paux->pProx;
	}
	cout << endl;
}

ElAluno* ListaAlunos::getAlunoPrim() {
	return pElAlunoPrim;
}