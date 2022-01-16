#ifndef  LISTAPRODUTOS_H
#define  LISTAPRODUTOS_H

#include "lib/lista.h"
#include "model/produto.h"

lista * iniciaProdutos(Produto * produto);
Produto * buscaProdutoNome(char *nome);
Produto * buscaProdutoCodigo(char *codigo);

#endif /*LISTAPRODUTOS_H*/