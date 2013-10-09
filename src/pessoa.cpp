#include "pessoa.h"

Pessoa::Pessoa(string nome, size_t id) : nome(nome), id(id) {
}

string Pessoa::getNome() const {
	return this->nome;
}

size_t Pessoa::getId() const {
	return this->id;
}

Tecnico::Tecnico(string nome, size_t id, string profissao) :
		Pessoa(nome, id), profissao(profissao) {
}

string Tecnico::getProfissao() const {
	return this->profissao;
}

Proprietario::Proprietario(string nome, size_t id, bool bMorador) :
		Pessoa(nome, id), bMorador(bMorador){
}


