#include "condominio.h"

/*
 * Condominio
 */
Condominio::Condominio(size_t area, size_t andar): area(area), andar(andar) {}

/*
 * Residencia
 */
Residencia::Residencia(size_t area, size_t andar, size_t taxa): Condominio(area,andar), taxa(taxa) {}

/*
 * Escritorio
 */
Escritorio::Escritorio(size_t area, size_t andar, size_t taxa): Condominio(area,andar), taxa(taxa) {}

/*
 * Loja
 */
Loja::Loja(size_t area, size_t andar, size_t taxa): Condominio(area,andar), taxa(taxa) {}
