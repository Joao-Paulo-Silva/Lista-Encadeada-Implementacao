## Português

Biblioteca ``usuario.h``, cria dois tipos struct um de produto e um de validade. Possui funções de alocação e manipulação das variáveis dos tipos ``Usuario`` e ``Validade``.

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