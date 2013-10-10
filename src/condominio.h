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
#include "pessoa.h" 						// <- DESCOMENTAR !!!!!!!!!!!!!!!!!!!

using namespace std;

/**
 *
 */
class Condominio {
protected:
	const unsigned int area;
	const unsigned int andar;
	const unsigned int taxa;
	vector<Proprietario *> proprietarios; // <- DESCOMENTAR !!!!!!!!!!!!!!!!!!!
public:
	Condominio(unsigned int area, unsigned int andar, unsigned int taxa);
};

class Residencia: public Condominio {
public:
	Residencia(unsigned int area, unsigned int andar, unsigned int taxa);
};

class Escritorio: public Condominio {
public:
	Escritorio(unsigned int area, unsigned int andar, unsigned int taxa);
};

class Loja: public Condominio {
public:
	Loja(unsigned int area, unsigned int andar, unsigned int taxa);
};



#endif /* CONDOMINIO_H_ */
