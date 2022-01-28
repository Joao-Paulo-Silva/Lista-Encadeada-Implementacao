## Português

Biblioteca ``lista.h``, neste arquivo contém um tipo que será usado como os nós da lista denominado ``Lista``, contendo funções para a manipulação dos dados da lista como por exemplo: Inserir dados, deletar lista, pegar dados a partir da posição e excluir um nó dado.

---

Ir para a biblioteca [clique aqui!](../lista/lista.h)

---

```C
typedef struct LISTA{
  [...]
}Lista;
```

Estrutura ``Lista`` contém um variável que armazena o endereço de qualquer tipo usando um ponteiro não definido (``void *``) e uma variável que aponta para o endereço da próxima ``Lista``. 

---

```C
Lista * iniciaLista();
```

A função ``iniciaLista()`` retorna ``NULL`` para atribuir a lista.

---

```C
Lista * alocaLista();
```

A função ``alocaLista()`` retorna uma ``Lista`` alocada dinamicamente.

---

```C
Lista * addItemLista(Lista *lista, void * endTipo);
```

A função ``addItemLista`` alocar um nó(``Lista``), e adiciona o último nó da lista ao endereço do próximo dentro do novo nó retornando a o novo nó para atualizar a lista.

---

```C
Lista * removeItemLista(Lista *lista, void * endTipo);
```

A função ``removeItemLista`` remove um nó da lista que contenha um tipo genérico igual ao enviado como parâmetro da função, retornado a nova ``Lista`` para atualização.

---

```C
void deletaLista(Lista *lista);
```

A função ``deletaLista`` desloca todos os nós da lista, mas não desaloca os dados.

---

```C
void deletaListaDadosAlocados(Lista *lista);
```

A função ``deletaListaDadosAlocados`` desloca todos os nós da lista e desloca os dados contidos no nó.

```C
int length(Lista *lista);
```

Função ``length`` retorna a quantidade de nós da lista.

---

```C
void * get(Lista *lista, unsigned int i);
```
Função ``get``, retorna o tipo armazenado no nó da posição, seguindo a ordem do último a ser inserido até o primeiro.

---

```C
void * getOrdemInsercao(Lista *lista, unsigned int i);
```

Função ``getOrdemInsercao``, retorna o tipo armazenado no nó da posição, seguindo a ordem do primeiro a ser inserido até o último.

---

## English

Library ``lista.h``, in this file contains a type that will be used as nodes of the list called ``Lista``, containing functions for data manipulation such as: inserted data, delete list, data from position and delete a given node.

---

Go to the library [click here!](../lista/lista.h)

---