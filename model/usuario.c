#include "usuario.h"
Usuario *alocaUsuario(){
  Usuario * novoUsuario = (Usuario*) malloc(sizeof(Usuario));
  return novoUsuario;
}
Usuario * iniciaUsuario(char * nome, char * email, unsigned int idade, char * cpf){
  Usuario * novoUsuario = alocaUsuario();
  strcpy(novoUsuario->nome, nome);
  strcpy(novoUsuario->email, email);
  novoUsuario->idade = idade;
  strcpy(novoUsuario->cpf, cpf);
  return novoUsuario;
}
