#include <stdio.h>

#define MAX 30

int main() {
    FILE *arq;
    char n_arq[MAX];
    int num;

    printf("Digite o nome do arquivo: ");
    scanf("%s", n_arq);

    arq = fopen(n_arq, "r");
    if (arq == NULL) {
        printf("ERRO");
        return 1;
    }
    else {
        fscanf(arq, "%d", &num);
        while (feof(arq) == 0) {
            printf("%d, ", num);
            fscanf(arq, "%d", &num);
        }
    }

    fclose(arq);
    return 0;
}