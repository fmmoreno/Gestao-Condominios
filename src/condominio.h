/**
 * Condominio.h
 *
 *  Created on: 9 de Out de 2013
 *      Author: ei12054
 *
 */

#ifndef CONDOMINIO_H_
#define CONDOMINIO_H_

#include <string>
#include <iostream>
#include <vector>
//#include "pessoa.h" 						// <- DESCOMENTAR !!!!!!!!!!!!!!!!!!!

using namespace std;

/**
 *
 */
class Condominio {
protected:
	const size_t area;
	const size_t andar;
	//vector<Proprietario *> proprietarios; // <- DESCOMENTAR !!!!!!!!!!!!!!!!!!!
public:
	Condominio(size_t area, size_t andar);
};

class Residencia: public Condominio {
	const size_t taxa;						// <- a definir a implementacao
public:
	Residencia(size_t area, size_t andar, size_t taxa);
	size_t getTaxa();
};

class Escritorio: public Condominio {
	const size_t taxa;						// <- a definir a implementacao
public:
	Escritorio(size_t area, size_t andar, size_t taxa);
	size_t getTaxa();
};

class Loja: public Condominio {
	const size_t taxa;						// <- a definir a implementacao
public:
	Loja(size_t area, size_t andar, size_t taxa);
	size_t getTaxa();
};


#endif /* CONDOMINIO_H_ */
