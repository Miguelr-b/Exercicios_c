// Refazer as médias das provas dos alunos seguindo, T'=T*3/mT e P' = P*1.1
#include <stdio.h>

float getMaiorP(float vetor[], int n, float maiorp) {
    for (int i=0; i<n; i++) {
        if (vetor[i] > maiorp) {
            maiorp = vetor[i];
        }
    }

    return maiorp;
}

float getMaiorT(float vetor[], int n, float maiort) {
    for (int i=0; i<n; i++) {
        if (vetor[i] > maiort) {
            maiort = vetor[i];
        }
    }

    return maiort;
}

float getMediaP(float vetor[], int n, float mediap) {
    float soma=0; 

    for (int i=0; i<n; i++) {
        soma += vetor[i];
    }

    mediap = soma/n;
    return mediap;
}

float getMediaT(float vetor[], int n, float mediat) {
    float soma=0; 

    for (int i=0; i<n; i++) {
        soma += vetor[i];
    }

    mediat = soma/n;
    return mediat;
}

int main() {
    int n; scanf("%d", &n);
    float p1, p2, p3, t1, t2;
    float Tao_natural_quanto_a_luz_do_dia[100], mas_que_Preguica_boa[100], media_alunos[100];
    float maiorp=0, maiort=0, mediap, mediat;

    for (int i=0; i<n; i++) {
        scanf("%f %f %f", &p1, &p2, &p3);
        mas_que_Preguica_boa[i] = (p1+p2+p3)/3;
    }
    for (int i=0; i<n; i++) {
        scanf("%f %f", &t1, &t2);
        Tao_natural_quanto_a_luz_do_dia[i] = (t1+t2)/2;
    }

    maiort = getMaiorT(Tao_natural_quanto_a_luz_do_dia, n, maiort);
    // Novas notas
    for (int i=0; i<n; i++) {
        mas_que_Preguica_boa[i] = mas_que_Preguica_boa[i]*1.1;
        Tao_natural_quanto_a_luz_do_dia[i] = (Tao_natural_quanto_a_luz_do_dia[i]*10)/maiort;
        media_alunos[i] = (mas_que_Preguica_boa[i] + Tao_natural_quanto_a_luz_do_dia[i]) / 2;
    }
    
    maiorp = getMaiorP(mas_que_Preguica_boa, n, maiorp);
    maiort = getMaiorT(Tao_natural_quanto_a_luz_do_dia, n, maiort);

    mediap = getMediaP(mas_que_Preguica_boa, n, mediap);
    mediat = getMediaT(Tao_natural_quanto_a_luz_do_dia, n, mediat);
    
    // Prints
    for (int i=0; i<n; i++) {
        printf("%0.2f\n", media_alunos[i]);
    }
    printf("Max P: %0.2f\n", maiorp);
    printf("Max T: %0.2f\n", maiort);
    printf("Media P: %0.2f\n", mediap);
    printf("Media T: %0.2f\n", mediat);

    return 0;
}