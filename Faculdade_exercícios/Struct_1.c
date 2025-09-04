#include <stdio.h>

struct Struct_1 {
    char nome[100], cpf[12], sexo;
    float altura, peso;
};

//struct Struct_1 leitura_informacoes(struct Struct_1 pessoa) {
struct Struct_1 leitura_informacoes(struct Struct_1 *pessoa) {
    printf("Informe o nome: ");
    scanf(" %[^\n]", pessoa -> nome);

    printf("Informe o cpf: ");
    scanf(" %[^\n]", pessoa -> cpf);
    
    printf("Informe o sexo (M/F/O): ");
    scanf(" %c", &pessoa -> sexo);

    printf("Informe a altura: ");
    scanf("%f", &pessoa -> altura);

    printf("Informe o peso em Kg: ");
    scanf("%f", &pessoa -> peso);

    //return pessoa;
}

int main() {
    int n;
    struct Struct_1 pessoa[100];

    while (1) {
        printf("\nRealizar X consultas (Digite 0 para terminar): ");
        scanf("%d", &n);

        if (n == 0) break;

        for (int i=0; i<n; i++) {
            //pessoa[i] = leitura_informacoes(pessoa[i]);
            leitura_informacoes(&pessoa[i]);
        }
        

        printf("\nConsulta:\n");
        for (int i=0; i<n; i++) {
            float imc = pessoa[i].peso / pessoa[i].altura*pessoa[i].altura;
            printf("Nome: %s\n", pessoa[i].nome);
            printf("IMC: %f\n", imc);
        }
    }

    return 0;
}