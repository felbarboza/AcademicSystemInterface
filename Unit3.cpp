//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFrame3 *Frame3;
//---------------------------------------------------------------------------
__fastcall TFrame3::TFrame3(TComponent* Owner)
	: TFrame(Owner)
{
}

void TFrame3::setCadastro(int type)
{
	this->type=type;
	this->Label2->Visible=false;
	this->Edit2->Visible=false;
	this->Label3->Visible=false;
	this->Edit3->Visible=false;
	this->Edit1->Text="";
	this->Edit2->Text="";
	this->Edit3->Text="";
	if(type==1 || type ==2 || type==3){
		this->Label2->Visible=true;
		this->Edit2->Visible=true;
	}
	if(type==3){
		this->Label3->Visible=true;
		this->Edit3->Visible=true;
	}
	switch (type) {
	case 0:
		this->Label1->Caption="Universidade";
		break;
	case 1:
		this->Label1->Caption="Universidade";
		this->Label2->Caption="Departamento";
		break;
	case 2:
		this->Label1->Caption="Departamento";
		this->Label2->Caption="Disciplina";
		break;
	case 3:
		this->Label1->Caption="Disciplina";
		this->Label2->Caption="Aluno";
		break;
	default:
		;
	}

}
//---------------------------------------------------------------------------
void __fastcall TFrame3::Button1Click(TObject *Sender)
{
	switch (this->type) {
	case 0:
		this->Sistema->CadUniversidade(AnsiString(this->Edit1->Text).c_str());
		break;
	case 1:
		this->Sistema->CadDepartamento(AnsiString(this->Edit1->Text).c_str(), AnsiString(this->Edit2->Text).c_str());
		break;
	case 2:
		this->Sistema->CadDisciplina(AnsiString(this->Edit1->Text).c_str(), AnsiString(this->Edit2->Text).c_str());
		break;
	case 3:
		this->Sistema->CadAluno(AnsiString(this->Edit1->Text).c_str(), AnsiString(this->Edit2->Text).c_str(), this->Edit3->Text.ToInt());
		break;
	default:
		;
	}
}
//---------------------------------------------------------------------------
