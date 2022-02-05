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

Estrutura ``DATAVALIDADE``, define a data de validade, com variáveis para dia, mês, ano.

---

```C
typedef struct PRODUTO{
[...]  
}Produto;
```

Estrutura ``PRODUTO``, define as informações que um produto possui como por exemplo: nome, preço, código e data de validade.

---

```C
Produto * alocaProduto();
```

Função ``alocaProduto()``, aloca um ``Produto`` e retorna o endereço do mesmo.


---

```C
Produto * iniciaProduto(char nome[50], float preco, char codigo[8], Validade data);
```

Função ``iniciaProduto``, criar um produto alocado, com as informações informadas como parâmetros da função.

---

```C
Validade * insereDataValidade(unsigned int dia, unsigned int Mes, unsigned int Ano);
```

Função ``insereDataValidade`` retorna um endereço de uma data de validade com os valores informados como parâmetro da função.

---

## English

Library ``produto.h``, creates two struct types one product and one expiry. It has functions for allocating and manipulating ``Produto`` and ``Validade`` variables.

---

Go to the library [click here!](../model/produto.h)

---

```C
typedef struct DATAVALIDADE{
  [...]
} Validade;
```

Struct ``DATAVALIDADE``, defines the expiration date, with variables for day, month, year.

---

```C
typedef struct PRODUTO{
[...]  
}Produto;
```

Structure ``PRODUTO``, defines the information that a product has, for example: name, price, code and expiration date.

---

```C
Produto * alocaProduto();
```

Function ``alocaProduto()``, allocates a ``Produto`` and returns its address.


---

```C
Produto * iniciaProduto(char nome[50], float preco, char codigo[8], Validade data);
```

Function ``iniciaProduto``, create an allocated product, with the information informed as parameters of the function.

---

```C
Validade * insereDataValidade(unsigned int dia, unsigned int Mes, unsigned int Ano);
```

Function ``insereDataValidade`` returns an address of an expiration date with the values ​​informed as a parameter of the function.

---
