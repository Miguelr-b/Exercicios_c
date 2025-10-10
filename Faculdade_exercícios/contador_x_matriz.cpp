#include <stdio.h>
#include <stdlib.h>

int** aloca_matriz(int n);
int** desaloca_matriz(int n, int **matriz);
void le_matriz(int n, int **matriz);
void imprime_matriz(int n, int **matriz);
int conta_x(int n, int **matriz, int x);

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("ERRO");
        return 1;
    }

    int n = atoi(argv[1]), **matriz, x, qnt;

    matriz = aloca_matriz(n);
    if (matriz == NULL) {
        printf("ERRO 2");
        return 1;
    }

    printf("\nInforme a matriz:\n");
    le_matriz(n, matriz);
    printf("\nInforme o x:");
    scanf("%d", &x);

    qnt = conta_x(n, matriz, x);

    printf("\nMatriz:\n");
    imprime_matriz(n, matriz);

    printf("\nQnt de vezes que '%d' aparecem:  %d", x, qnt);
    
    matriz = desaloca_matriz(n, matriz);

    return 0;
}

int** aloca_matriz(int n) {
    int **matriz;

    matriz = (int **) malloc(n * sizeof(int *));
    if (matriz == NULL) {
        printf("ERRO 2");
        return NULL;
    }

    for (int i=0; i<n; i++) {
        matriz[i] = (int *) malloc(n * sizeof(int));

        if (matriz[i] == NULL) {
            printf("ERRO 2");
            return NULL;
        }
    }
    return matriz;
}

int** desaloca_matriz(int n, int **matriz) {
    for (int i=0; i<n; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return NULL;
}

void le_matriz(int n, int **matriz) {
    int i=0, j;
    while (i <n) {
        for (j=0; j<n; j++) {
            scanf("%d", &matriz[i][j]);
        }
        i++;
    }
}

void imprime_matriz(int n, int **matriz) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int conta_x(int n, int **matriz, int x) {
    int qnt =0;

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (matriz[i][j] == x) {
                qnt++;
            }
        }
    }
    return qnt;
}
