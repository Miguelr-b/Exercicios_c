#include <stdio.h>
#include <stdlib.h>

#define MAX 2

void le_matriz(int matriz[MAX][MAX]) {
    int *p;

    printf("Digite os numeros da matriz %dx%d:\n", MAX, MAX);
    for (p = &matriz[0][0]; p<&matriz[0][0] + MAX*MAX; p++) {
        scanf("%d", p);
    }
}

void multiplica_matriz(int matriz[MAX][MAX], int k) {
    int *p;

    for (p=&matriz[0][0]; p<&matriz[0][0] + MAX*MAX; p++) {
        *p = *p * k;
    }
}

void imprime_matriz(int matriz[MAX][MAX]) {
    int *p, c=0;

    for (p=&matriz[0][0]; p<&matriz[0][0] + MAX*MAX; p++) {
        if (c==MAX) {
            printf("\n%d ", *p);
            c = 0;
        }
        else {
            printf("%d ", *p);
            c++;
        }
    }
}

int main() {
    int matriz[MAX][MAX], k;

    le_matriz(matriz);
    printf("\nDigite o número do fator multiplicador:\n");
    scanf("%d\n", &k);

    multiplica_matriz(matriz, k);

    imprime_matriz(matriz);

    return 0;
}