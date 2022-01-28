## Português

Biblioteca ``usuario.h``, cria um tipo struct de usuário e possui funções de alocação e manipulação das variáveis do tipo ``Usuario``.

---

```C
typedef struct USUARIO{
  [...]
}Usuario;
```

---

```C
Usuario *alocaUsuario();
```

---

```C
Usuario * iniciaUsuario(char * nome, char * email, unsigned int idade, char * cpf);
```