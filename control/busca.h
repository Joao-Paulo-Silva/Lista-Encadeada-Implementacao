#ifndef  BUSCA_H
#define  BUSCA_H

#include <string.h>
#include "../model/produto.h"
#include "../model/usuario.h"
#include "../lista/lista.h"

// Função buscaProduto retorna um  endereço de um Produto, se encontrado na lista de produtos a partir do nome.
Produto * buscaProduto(Lista * listaProdutos, char * nome);
// Função buscaUsuarios retorna um  endereço de um Usuario, se encontrado na lista de usuários a partir do nome.
Usuario * buscaUsuarios(Lista * listaUsuarios, char * nome);


#endif /*BUSCA_H*/