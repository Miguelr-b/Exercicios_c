#include <stdio.h>

#define MAX 30

int main() {
    FILE *arq;
    char n_arq[MAX], nome_aluno[MAX];
    float p1, p2, media;

    printf("Nome do arquivo: ");
    scanf(" %s", &n_arq);

    arq = fopen(n_arq, "r");
    if (arq == NULL) {
        printf("EROO");
        return 1;
    }
    else {
        printf("OIII\n\n");
        fscanf(arq, "%s", nome_aluno);
        fscanf(arq, "%f", &p1);
        fscanf(arq, "%f", &p2);
        printf("ALUNOS   MEDIA\n");
        while (feof(arq) == 0) {
            media = (p1+p2)/2;
            printf("%s      %.2f\n", nome_aluno, media);

            fscanf(arq, "%s", nome_aluno);
            fscanf(arq, "%f", &p1);
            fscanf(arq, "%f", &p2);
        }
    }
    

    fclose(arq);

    return 0;
}