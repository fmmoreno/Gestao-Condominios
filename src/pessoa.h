#ifndef PESSOA_H_
#define PESSOA_H_

#include <string>
#include <vector>

using namespace std;

/**
 * Classe Pessoa. Contém os membros comuns a todos os tipos de Pessoa: técnico e proprietário.
 */
class Pessoa {
protected:
	size_t id;	 /**< ID da pessoa para facilitar na organização de todas as pessoas. */
	string nome; /**< Nome da pessoa, completo ou não. */

public:
	/**
	 * Contrutor de Pessoa.
	 * @param nome string com nome da pessoa a criar.
	 * @param id size_t com ID da pessoa a criar.
	 */
	Pessoa(string nome, size_t id);
	/**
	 * Devolve ID de Pessoa.
	 * @return size_t com ID de Pessoa.
	 */
	size_t getId() const;
	/**
	 * Devolve nome de Pessoa.
	 * @return string com nome de Pessoa.
	 */
	string getNome() const;
};

/**
 * Classe Tecnico. Herda membros da classe mãe Pessoa.
 */
class Tecnico : public Pessoa {
protected:
	string profissao; /**< Define a profissão de Tecnico, p.e: Pintor, eletricista, ... */

public:
	/**
	 * Construtor de Tecnico.
	 * @param nome string com nome de Tecnico.
	 * @param id size_t com ID de Tecnico.
	 * @param profissao string com profissão de Tecnico.
	 */
	Tecnico(string nome, size_t id, string profissao);
	/**
	 * Devolve profissão de Tecnico.
	 * @return string com a profissão de Tecnico
	 */
	string getProfissao() const;
};

/**
 * Classe Proprietario. Herda membros da classe mãe Pessoa.
 */
class Proprietario : public Pessoa {
protected:
	bool bMorador; /**< True se o Proprietario for morador, False em caso contrário. */

public:
	/**
	 * Construtor de Proprietario.
	 * @param nome string com nome de Proprietario.
	 * @param id size_t com ID de Proprietario.
	 * @param bMorador bool True se o proprietario for morador, False em caso contrário.
	 */
	Proprietario(string nome, size_t id, bool bMorador);
	/**
	 * Devolve valor do booleano bMorador.
	 * @return bool bMorador.
	 */
	bool eMorador() const;

};


#endif /* PERSON_H_ */
