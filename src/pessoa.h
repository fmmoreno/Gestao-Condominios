#ifndef PESSOA_H_
#define PESSOA_H_

#include <string>
#include <vector>

using namespace std;

class Pessoa {
protected:
	string nome;
	size_t id;

public:
	Pessoa(string nome, size_t id);
	string getNome() const;
	size_t getId() const;

};

class Tecnico : public Pessoa {
protected:
	string profissao;

public:
	Tecnico(string nome, size_t id, string profissao);
	string getProfissao() const;

};

class Proprietario : public Pessoa {
protected:
	bool bMorador;

public:
	Proprietario(string nome, size_t id, bool bMorador);
	bool eMorador() const;


};


#endif /* PERSON_H_ */
