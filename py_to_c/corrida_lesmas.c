// O exercício é encontrar o competir mais rápido dentro do limite baseado nas horas da prova 
#include <stdio.h>

int setLimite(int hr, int limite) {
    if (hr == 3) {
        limite = 10;
    }
    else if (hr == 2) {
        limite = 20;
    } else limite = 100;

    return limite;
}

int main() {
    int n; 
    int competidores[100], hr, limite, maior=0;

    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &competidores[i]);
    }
    scanf("%d", &hr);

    limite = setLimite(hr, limite);

    for (int i=0; i<n; i++) {
        if (competidores[i] <= limite) {
            if (competidores[i] > maior) {
                maior = competidores[i];
            }
        }
    }

    printf("%d", maior);

    return 0;
}