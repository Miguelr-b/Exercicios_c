#include <stdio.h>

#define MAX 30

int main() {
    FILE *arq1, *arq2;
    char n_arq1[MAX], n_arq2[MAX] = "media.txt", nome_aluno[MAX];
    float p1, p2, media;

    printf("Nome do arquivo: ");
    scanf(" %s", &n_arq1);

    arq1 = fopen(n_arq1, "r");
    if (arq1 == NULL) {
        printf("ERRO");
        return 1;
    }
    else {
        arq2 = fopen(n_arq2, "a");
        if (arq2 == NULL) {
            printf("ERRO");
            return 1;
        }
        else {
            fscanf(arq1, "%s%f%f", &nome_aluno, &p1, &p2);
            fprintf(arq2, "\nALUNOS MEDIA:\n");
            while (feof(arq1) == 0) {
                media = (p1+p2)/2;
                fprintf(arq2, "%s %.2f\n", nome_aluno, media);

                fscanf(arq1, "%s%f%f", &nome_aluno, &p1, &p2);
            }
        }
        
    }
    

    fclose(arq1);
    fclose(arq2);

    return 0;
}