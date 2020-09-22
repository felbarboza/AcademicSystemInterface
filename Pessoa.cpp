#include "Pessoa.h"
#include <iostream>
using std::cout;
using std::endl;

// construtora e destrutora
Pessoa::Pessoa()
{

}
Pessoa::~Pessoa() 
{
}

// metodos de inicializacao e calculo de idade
void Pessoa::inicializa(const char* nome) {

	nomeP = nome;
}

// sets e gets
void Pessoa::setNome(const char* n) {
	nomeP = n;
}
string Pessoa::getNome() {
	return nomeP;
}
