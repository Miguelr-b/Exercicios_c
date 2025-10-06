#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int main(int argc, char **argv) {
    if (argc != MAX+1) {
        printf("Erro");
        return 0;
    }

    int v[MAX], *p, soma=0;

    for (int i=0; i<MAX; i++) {
        v[i] = atoi(argv[i+1]);
    }

    p = v;
    for (int i=0; i<MAX+1; i++) {
        soma += p[i];
    }
    printf("%d", soma);

    return 0;
}