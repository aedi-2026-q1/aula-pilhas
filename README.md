# Aula: Pilhas

Projeto base da aula de pilhas (LIFO).

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
│   │   └── stack.h
│   └── stack-linked-list/
│       └── README.md
└── .devcontainer/
    ├── Dockerfile
    └── devcontainer.json
```

## Estado atual do projeto

`main.c` usa as funcoes abaixo da pilha:
- `stack_create`
- `stack_push`
- `stack_pop`
- `stack_peek`
- `stack_size`
- `stack_print`
- `stack_destroy`

A interface dessas funcoes esta em `src/stack.h`.

Se a implementacao da pilha ainda nao existir no seu repositorio (por exemplo, em `src/stack.c`), o projeto nao vai linkar ate essa parte ser implementada.

## Compilacao

Navigate to the stack-array directory and use the Makefile:

```bash
cd src/stack-array
make
```

This compiles all source files and creates the executable at `build/main`.

Available make targets:
- `make` or `make all` - Builds the complete application
- `make main` - Compiles main.o
- `make stack` - Compiles stack.o
- `make element` - Compiles element.o
- `make clean` - Removes build artifacts

## Execucao

From the stack-array directory:

```bash
./build/main
```

## Ambiente de desenvolvimento (opcional)

O projeto inclui configuracao de Dev Container em `.devcontainer/` baseada em Alpine Linux, com `clang` e `valgrind`.

Para usar localmente com Docker:

```bash
docker build -t aed-i-c -f .devcontainer/Dockerfile .
docker run --rm -it -v "$PWD":/work -w /work aed-i-c
```
