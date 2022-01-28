## Português

Biblioteca ``lista.h``, neste arquivo contém um tipo que será usado como os nós da lista denominado ``Lista``, contendo funções para a manipulação dos dados da lista como por exemplo: Inserir dados, deletar lista, pegar dados a partir da posição e excluir um nó dado.

---

```C
typedef struct LISTA{
  [...]
}Lista;
```

```C
Lista * iniciaLista();
```

```C
Lista * alocaLista();
```

```C
Lista * addItemLista(Lista *lista, void * endTipo);
```

```C
Lista * removeItemLista(Lista *lista, void * endTipo);
```

```C
void deletaLista(Lista *lista);
```

```C
void deletaListaDadosAlocados(Lista *lista);
```

```C
int length(Lista *lista);
```

```C
void * get(Lista *lista, unsigned int i);
```
```C
void * getOrdemInsercao(Lista *lista, unsigned int i);
```