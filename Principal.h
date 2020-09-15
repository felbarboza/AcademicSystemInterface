#pragma once
#include "Pessoa.h"
#include "ListaUniversidades.h"
#include "ListaDepartamentos.h"
#include "ListaDisciplinas.h"
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>

class Principal
{
private:
	// Contadores para identificadores;
	int cont_idUniv;
	int cont_idDisc;
	int cont_idDepart;
	int cont_idAluno;
public:
	Principal();
	~Principal();
	void CadDisciplina(const char* depart, const char* disci);
	void CadDepartamento(const char* univ, const char* depart);
	void CadUniversidade(const char* univ);
	void CadAluno(const char* disci, const char* aluno, int ra);
	void GravarTudo();
	void GravarUniversidades();
	void GravarDepartamentos();
	void GravarDisciplinas();
	void GravarAlunos();
	void RecuperarTudo();
	void RecuperarUniversidades();
	void RecuperarDepartamentos();
	void RecuperarDisciplinas();
	void RecuperarAlunos();
	void setListBox(TListBox* ListBox1);
	// Listas
	ListaUniversidades LUniversidades;
	ListaDepartamentos LDepartamentos;
	ListaDisciplinas LDisciplinas;
	ListaAlunos LAlunos;
};