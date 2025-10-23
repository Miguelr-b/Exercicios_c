#include "lista.h"
#include <stdio.h>
#include <stdlib.h>

void desalocar(Listas* &lista) {
    Listas *p = lista, *aux;

    while (p != NULL) {
        aux = p;
        p = p->prox;
        free(aux);
    }
    lista = NULL;

}

void inserir_fim(int n, Listas* &lista) {
    Listas *p, *novo;

    novo = (Listas *) malloc(sizeof(Listas));
    novo->valor = n;
    novo->prox = NULL;

    if (lista == NULL) {
        lista = novo;
    }
    else {
        p = lista;
        while (p->prox != NULL) {
            p = p->prox;
        }
        p->prox = novo;
    }
}

void remover(int x, Listas* &lista) {
    Listas *p = lista, *p0 = NULL;

    while (p != NULL && p->valor != x) {
        p0 = p;
        p = p->prox;
    }
    if (p == NULL) {
        printf("Nao encontrado");
    }
    else {
        if (p0 == NULL) 
            lista = p->prox;
        else 
            p0->prox = p->prox;
        free(p);
        
    }
}

void imprimir(Listas* lista) {
    Listas *p = lista;
    while (p != NULL) {
        printf("%d ", p->valor);
        p = p->prox;
    }
}

void procurar_valor(int x, Listas* lista) {
    Listas *p=lista;

    while (p != NULL && p->valor != x) {
        p = p->prox;
    }
    if (p != NULL) {
        printf("Valor:%d no endereco: %p\n", p->valor, p);
    }
    else printf("Nao encontrei\n");
}