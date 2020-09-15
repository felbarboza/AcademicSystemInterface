//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFrame2 *Frame2;
//---------------------------------------------------------------------------
__fastcall TFrame2::TFrame2(TComponent* Owner)
	: TFrame(Owner)
{
}
//---------------------------------------------------------------------------

void TFrame2::setList(int type)
{

	this->ListBox1->Clear();
	switch (type) {
	case 0:
		this->Label1->Caption="Universidade";
		this->Sistema->LUniversidades.listeUniversidades();
		break;
	case 1:
		this->Label1->Caption="Departamento";
		this->Sistema->LDepartamentos.listeDepartamentos();
		break;
	case 2:
		this->Label1->Caption="Disciplina";
		this->Sistema->LDisciplinas.listeDisciplinas();
		break;
	case 3:
		this->Label1->Caption="Aluno";
		this->Sistema->LAlunos.listeAlunos();
		break;
	case 4:
		this->Label1->Caption="Tudo";
		this->Sistema->LUniversidades.listeUniversidades();
		this->Sistema->LDepartamentos.listeDepartamentos();
		this->Sistema->LDisciplinas.listeDisciplinas();
		this->Sistema->LAlunos.listeAlunos();
		break;
	default:
		;
	}

}

void TFrame2::setListBox()
{
    this->Sistema->setListBox(this->ListBox1);
}