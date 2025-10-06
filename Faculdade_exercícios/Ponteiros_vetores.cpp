#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int main(int argc, char **argv) {
    int v[MAX], *p, soma=0;

    if (argc != MAX+1) {
        printf("Falta argumentos.");
        return 0;
    }

    for (int i=0; i < MAX+1; i++) {
        v[i] = atoi(argv[i+1]); 
    }
    for (p = &v[MAX-1]; p >= &v[0]; p--) {
        soma += *p;
    }

    printf("%d", soma);

    return 0;
}