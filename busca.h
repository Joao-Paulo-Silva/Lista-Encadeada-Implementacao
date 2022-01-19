#ifndef  BUSCA_H
#define  BUSCA_H

#include <string.h>
#include "model/produto.h"
#include "model/usuario.h"
#include "lista/lista.h"

Produto * buscaProduto(Lista * listaProdutos, char * nome);
Usuario * buscaUsuarios(Lista * listaUsuarios, char * nome);

#endif /*BUSCA_H*/