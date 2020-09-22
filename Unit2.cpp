//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <typeinfo>

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
		this->Sistema->IteradorLUniversidades = Sistema->LUniversidades.LUniversidades.begin();

		while (Sistema->IteradorLUniversidades!= Sistema->LUniversidades.LUniversidades.end())
		{
			string aux;
			aux = (*(Sistema->IteradorLUniversidades))->getNome();
			std::cout << typeid((*(Sistema->IteradorLUniversidades))->getNome()).name() << '\n';
			AnsiString NomeUniv;
			NomeUniv = aux.data();

			ListBox1->Items->Add(NomeUniv);
			Sistema->IteradorLUniversidades++;
		}
		break;
	case 1:
		this->Label1->Caption="Departamento";
		break;
	case 2:
		this->Label1->Caption="Disciplina";
		break;
	case 3:
		this->Label1->Caption="Aluno";
		break;
	case 4:
		this->Label1->Caption="Tudo";
		break;
	default:
		;
	}

}

