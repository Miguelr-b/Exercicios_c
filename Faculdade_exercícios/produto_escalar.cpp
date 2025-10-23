#include <stdio.h>
#include <stdlib.h>

void le_vetor(int n, int *v1, int *v2) {
    int *p;
    printf("\nVetor1: \n");
    for (p=v1; p<v1+n; p++) {
        scanf("%d", p);
    }
    printf("\nVetor2: \n");
    for (p=v2; p<v2+n; p++) {
        scanf("%d", p);
    }
    printf("\n");
}

int produto_escalar(int n, int *v1, int *v2) {
    int soma=0;
    for (int i=0; i<n; i++) {
        soma += v1[i]*v2[i];
    }
    return soma;
}

void print(int n, int *v) {
    int *p;
    for (p=v; p<v+n; p++) {
        printf("%d ", *p);
    }
    printf("\n");
}

int main() {
    int n, *v1, *v2, resultado_produto;

    printf("Tamanho do vetor 1 e 2: ");
    scanf("%d", &n);

    v1 = (int *) malloc(n * sizeof(int));
    v2 = (int *) malloc(n * sizeof(int));

    
    if (v1 != NULL && v2 != NULL) {
        le_vetor(n, v1, v2);

        resultado_produto = produto_escalar(n, v1, v2);

        printf("\n");
        print(n, v1);
        print(n, v2);
        printf("%d", resultado_produto);
    }

    free(v1);
    free(v2);

    return 0;
}