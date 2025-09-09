#include <stdio.h>

int main() {
    int lista[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int procurado;
    
    printf("Escolha um numero para verificar se eles esta na lista: ");
    scanf("%d", &procurado);

    int esq=0, dir=10, meio, condicao=0;
    while (esq <= dir) {
        meio = (esq + dir) / 2;
        
        if (lista[meio] == procurado) {
            condicao = 1;
            break;
        } 
        else if (lista[meio] > procurado) {
            dir = meio-1;
        }
        else 
            esq = meio+1;
    }
    
    if (condicao) {
        printf("Numero encontrado.");
    } else printf("Numero nao foi encontrado");

    return 0;
}