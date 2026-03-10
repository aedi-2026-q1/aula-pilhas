# Aula: Pilhas

Projeto base da aula de pilhas (LIFO).

O codigo ja inclui:
- tipo de elemento (`Element`) definido como `int`.
- funcoes utilitarias para elemento.
- contrato (interface) da pilha em `stack.h`.
- `main.c` com exemplo de uso da API da pilha.

## Estrutura

```
.
├── README.md
├── src/
│   ├── element.c
│   ├── element.h
│   ├── main.c
│   └── stack.h
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

No diretorio do projeto:

```bash
mkdir -p build
clang -Wall -Wextra -pedantic \
    -o build/app src/main.c src/element.c src/stack.c
```

## Execucao

```bash
./build/app
```

## Ambiente de desenvolvimento (opcional)

O projeto inclui configuracao de Dev Container em `.devcontainer/` baseada em Alpine Linux, com `clang` e `valgrind`.

Para usar localmente com Docker:

```bash
docker build -t aed-i-c -f .devcontainer/Dockerfile .
docker run --rm -it -v "$PWD":/work -w /work aed-i-c
```
