#pragma once
#include "ElUniversidade.h"
#include "Universidade.h"
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>

class ListaUniversidades
{
private:
	int cont_disc;
	int numero_disc;
	ElUniversidade *pElUniversidadePrim;
	ElUniversidade *pElUniversidadeAtual;
public:
	ListaUniversidades(int nd = 1000);
	~ListaUniversidades();
	void incluaUniversidade(Universidade* pdi);
	void listeUniversidades();
	Universidade* localizar(const char* n);
	ElUniversidade* getUniversidadePrim();
    TListBox* ListBox1;
};