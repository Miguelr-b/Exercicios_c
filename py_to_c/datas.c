// Exercício que avança um dia em uma data digitada
#include <stdio.h>

struct {
        int dia, mes, ano;
    } data, prox;

int main() {
    printf("Informe uma data (dd/mm/aa): ");
    scanf("%d/%d/%d", &prox.dia, &prox.mes, &prox.ano);
    prox.dia ++;

    int mes_31 = prox.dia == 31 && (prox.mes == 4 ||prox.mes == 6 ||prox.mes == 9 ||prox.mes == 11|| prox.mes == 12);
    int mes_30 = prox.dia == 30 && (prox.mes == 2);
    int mes_29 = prox.dia == 29 &&  prox.mes == 2 && (prox.ano % 400 != 0 && (prox.ano % 100 == 0 || prox.ano % 4 != 0));

    if (prox.dia > 31 || mes_31 || mes_30 || mes_29) {
        prox.dia = 1;
        prox.mes ++;
    }
    
    if (prox.mes >= 12) {
        prox.mes = 1;
        prox.ano ++;
    }

    printf("O dia seguinte sera: %d/%d/%d\n", prox.dia, prox.mes, prox.ano);
    

    return 0;
}