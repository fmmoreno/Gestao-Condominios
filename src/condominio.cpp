#include "condominio.h"

/*
 * Condominio
 */
Condominio::Condominio(unsigned int area, unsigned int andar, unsigned int taxa):
		area(area), andar(andar), taxa(taxa) {}

/*
 * Residencia
 */
Residencia::Residencia(unsigned int area, unsigned int andar, unsigned int taxa):
		Condominio(area,andar,taxa) {}

/*
 * Escritorio
 */
Escritorio::Escritorio(unsigned int area, unsigned int andar, unsigned int taxa):
		Condominio(area,andar,taxa) {}

/*
 * Loja
 */
Loja::Loja(unsigned int area, unsigned int andar, unsigned int taxa):
		Condominio(area,andar,taxa) {}
