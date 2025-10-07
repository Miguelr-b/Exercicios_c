#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int m, n, **matriz;
    scanf("%d%d", &m, &n);
    

    matriz = (int **) malloc(m * sizeof(int *));
    if (matriz == NULL) {
        printf("Erro de alocacao de memoria.\n");
        for (int k = 0; k < m; k++) {
            free(matriz[k]);
        }
        free(matriz);
        return 1;
    }

    for (int i=0; i<m; i++) {
        matriz[i] = (int *) malloc(n * sizeof(int));
        if (matriz[i] == NULL) {
            return 1;
        }
    }

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");
    
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            printf("%d ", *(*(matriz + i) +j) );
        }
        printf("\n");
    }
    
    for (int i = 0; i < m; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}