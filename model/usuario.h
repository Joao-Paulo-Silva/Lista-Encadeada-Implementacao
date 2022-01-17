#ifndef  USUARIO_H
#define  USUARIO_H

#include <stdlib.h>
#include <string.h>

typedef struct USUARIO{
  char nome[100];
  char email[100];
  unsigned int idade;
  char cpf[10];
}Usuario;
Usuario *alocaUsuario();
Usuario * iniciaUsuario(char * nome, char * email, unsigned int idade, char * cpf);

#endif /*USUARIO_H*/