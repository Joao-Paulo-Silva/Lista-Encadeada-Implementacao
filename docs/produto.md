## Português

Biblioteca ``produto.h``, cria dois tipos struct um de produto e um de validade. Possui funções de alocação e manipulação das variáveis dos tipos ``Produto`` e ``Validade``.

---

Ir para a biblioteca [clique aqui!](../model/produto.h)

---

```C
typedef struct DATAVALIDADE{
  [...]
} Validade;
```

---

```C
typedef struct PRODUTO{
[...]  
}Produto;
```

---

```C
Produto * alocaProduto();
```

---

```C
Produto * iniciaProduto(char nome[50], float preco, char codigo[8], Validade data);
```

---

```C
Validade * insereDataValidade(unsigned int dia, unsigned int Mes, unsigned int Ano);
```
---

## English

Library ``produto.h``, creates two struct types one product and one expiry. It has functions for allocating and manipulating ``Produto`` and ``Validade`` variables.

---

Go to the library [click here!](../model/produto.h)

---