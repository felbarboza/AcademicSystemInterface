#include "Universidade.h"
#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

// construtora e destrutora
Universidade::Universidade(int Id)
{
	id = Id;
}
Universidade::~Universidade()
{
}
// sets e gets
void Universidade::setNome(const char* n)
{
	strcpy(nome, n);
}
const char* Universidade::getNome()
{
	return nome;
}
int Universidade::getId() {
	return id;
}

// metodos de inclusao na lista e de listagem
void Universidade::incluaDepartamento(Departamento* pd) {
	ObjLDepartamentos.incluaDepartamento(pd);
	pd->setUniversidade(this);

}
void Universidade::listeDepartamentos() {
	ObjLDepartamentos.listeDepartamentos();
}