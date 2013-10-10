#ifndef EMPRESA_H_
#define EMPRESA_H_

#include <string>
#include <vector>

#include "pessoa.h"

using namespace std;

class Empresa {
protected:
	string nome;
	vector<Tecnico *> tecnicos;

	// vector<Condominio *> condominios;

public:


};


#endif /* EMPRESA_H_ */
