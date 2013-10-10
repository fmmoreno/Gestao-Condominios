#include "pessoa.h"

Pessoa::Pessoa(string nome, unsigned int id) : id(id), nome(nome) {
}

string Pessoa::getNome() const {
	return this->nome;
}

unsigned int Pessoa::getId() const {
	return this->id;
}

Tecnico::Tecnico(string nome, unsigned int id, string profissao) :
		Pessoa(nome, id), profissao(profissao) {
}

string Tecnico::getProfissao() const {
	return this->profissao;
}

Proprietario::Proprietario(string nome, unsigned int id, bool bMorador) :
		Pessoa(nome, id), bMorador(bMorador){
}


