#include "usuario.h"

Usuario * iniciaUsuario(char * nome, char * email, unsigned int idade, char * cpf){
  Usuario * novoUsuario;
  strcpy(novoUsuario->nome, nome);
  strcpy(novoUsuario->email, email);
  novoUsuario->idade = idade;
  strcpy(novoUsuario->cpf, cpf);
  return novoUsuario;
}
