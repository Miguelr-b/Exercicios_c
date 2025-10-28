#include <stdio.h>
#include <stdlib.h>

struct Listas {
    int valor;
    Listas *prox;
};

void adicionar(int valor, Listas *&lista);

void desalocar(Listas *&lista);

void imprimir(Listas *lista);

int remove_ultimo (Listas *&lista);

int main() {
    Listas *lista = NULL;
    int valor;

    adicionar(2, lista);
    adicionar(5, lista);
    adicionar(7, lista);

    imprimir(lista);

    valor = remove_ultimo(lista);
    imprimir(lista);

    desalocar(lista);
    printf("%p", lista );

    return 0;
}

void adicionar(int valor, Listas *&lista) {
    Listas *novo, *p = lista;
    novo = (Listas *) malloc(sizeof(Listas));
    novo -> valor = valor;
    novo -> prox = NULL;

    if (lista == NULL) {
        lista = novo;
    }
    else {
        while(p -> prox != NULL) {
            p = p -> prox;
        }
        p -> prox = novo;
    }
}

void desalocar(Listas *&lista) {
    Listas *aux;

    while (lista != NULL) {
        aux = lista;
        lista = lista -> prox;
        free(aux);
    }
    lista = NULL;
}

void imprimir(Listas *lista) {
    while (lista != NULL) {
        printf("%d ", lista -> valor);
        lista = lista -> prox;
    }
    printf("\n");
}

int remove_ultimo (Listas *&lista) {
    Listas *p = lista, *ant = NULL;
    int valor;

    if (lista == NULL) {
        printf("Lista nula\n");
        return NULL;
    }
    if (lista->prox == NULL) {
        valor = lista->valor;
        free(lista);
        lista = NULL; 
        return valor;
    }

    while (p -> prox != NULL) {
        ant = p;
        p = p -> prox;
    }
    ant -> prox = NULL;
    valor = p -> valor;

    free(p);
    p = NULL;

    return valor;
}

