#pragma once
#include "Universidade.h"
#include <string>

using namespace std;

class Pessoa
{
protected:
	string nomeP;
public:
	Pessoa();
	~Pessoa();
	void inicializa(const char* nome);
	void setNome(const char* n);
	string getNome();
};