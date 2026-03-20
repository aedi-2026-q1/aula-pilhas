# Aula: Pilhas

Projeto final da aula de pilhas (LIFO).

## Estrutura

```
.
├── README.md
├── src/
│   ├── stack-array/
│   │   ├── Makefile
│   │   ├── element.c
│   │   ├── element.h
│   │   ├── main.c
│   │   ├── stack.c
│   │   └── stack.h
│   └── stack-linked-list/
│       ├── Makefile
│       ├── element.c
│       ├── element.h
│       ├── main.c
│       ├── stack.c
│       └── stack.h
```

## Implementacoes

O repositorio possui duas implementacoes de pilha:

- `src/stack-array`: pilha usando array com capacidade fixa.
- `src/stack-linked-list`: pilha usando lista encadeada.

Em ambas, os programas de exemplo em `main.c` exercitam operacoes de criacao, insercao, remocao, consulta de topo e impressao.

### Interface da pilha

- `stack_create(void)` ou `stack_create(size_t capacity)`
- `stack_destroy(Stack* stack)`
- `stack_push(Stack* stack, Element value)`
- `stack_pop(Stack* stack)`
- `stack_peek(Stack* stack)`
- `stack_is_empty(Stack* stack)`
- `stack_size(Stack* stack)`
- `stack_print(Stack* stack)`

## Compilacao e execucao

Cada implementacao possui um `Makefile` para facilitar a compilacao. Para compilar e executar a pilha usando array:

```bash
cd src/stack-array
make main
./main
```
