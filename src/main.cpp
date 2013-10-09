#include <iostream>

#include "empresa.h"
#include "pessoa.h"

int main() {
	Pessoa p1 = Pessoa("Kevin", 0);
	Tecnico t1 = Tecnico("Luis", 0, "Trolha");

	cout << "Pessoa criada com nome: " << p1.getNome() << " e ID: " << p1.getId()
			<< endl;
	cout << "Técnico criado com nome: " << t1.getNome() << ", ID: " << t1.getId()
				<< " e profissão: " << t1.getProfissao() << endl;

	return 0;
}



