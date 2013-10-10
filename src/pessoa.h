#ifndef PESSOA_H_
#define PESSOA_H_

#include <string>
#include <vector>

using namespace std;

/**
 * Classe Pessoa. Contém os membros comuns a todos os tipos de Pessoa: tecnico e proprietario.
 */
class Pessoa {
protected:
	unsigned int id; /**< ID da pessoa para facilitar na organizacao de todas as pessoas. */
	string nome; /**< Nome da pessoa, completo ou nao. */

public:
	/**
	 * Contrutor de Pessoa.
	 * @param nome string com nome da pessoa a criar.
	 * @param id unsigned int com ID da pessoa a criar.
	 */
	Pessoa(string nome, unsigned int id);
	/**
	 * Devolve ID de Pessoa.
	 * @return unsigned int com ID de Pessoa.
	 */
	unsigned int getId() const;
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
	 * @param id unsigned int com ID de Tecnico.
	 * @param profissao string com profissão de Tecnico.
	 */
	Tecnico(string nome, unsigned int id, string profissao);
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
	 * @param id unsigned int com ID de Proprietario.
	 * @param bMorador bool True se o proprietario for morador, False em caso contrário.
	 */
	Proprietario(string nome, unsigned int id, bool bMorador);
	/**
	 * Devolve valor do booleano bMorador.
	 * @return bool bMorador.
	 */
	bool eMorador() const;
};


#endif /* PERSON_H_ */
