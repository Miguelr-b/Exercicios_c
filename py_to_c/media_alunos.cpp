#include <stdio.h>
#include <string.h>

struct Aluno {
    float p1, p2, media;
    int matricula;
    char nome[100]; 
}; 

int main() {
    int n;
    struct Aluno alunos[50];

    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        printf("Nome: ");
        scanf(" %[^\n]", &alunos[i].nome);
        printf("Matricula, nota 1 e nota 2: ");
        scanf("%d %f %f", &alunos[i].matricula, &alunos[i].p1, &alunos[i].p2);
        alunos[i].media = (alunos[i].p1 + alunos[i].p2) / 2;
    }
    
    for (int i=0; i<n; i++) {
        printf("Aluno %d: %s (%d), p1=%0.2f, p2=%0.2f, media=%0.2f.\n", i+1, alunos[i].nome, alunos[i].matricula, alunos[i].p1, alunos[i].p2, alunos[i].media);
    }

    return 0;
}