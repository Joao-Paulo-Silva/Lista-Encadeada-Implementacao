#ifndef  TELAPRINCIPAL_H
#define  TELAPRINCIPAL_H

#include <stdio.h>
#include "model/produto.h"
#include "model/usuario.h"

void positionPrint(int x,  int y);
unsigned int menuInicial();
unsigned int produtoMenu();
unsigned int usuarioMenu();

Produto * inserirProduto();
Usuario * inserirUsuario();

#endif /*TELAPRINCIPAL_H*/