#include <stdio.h>
#include <math.h>

float soma(float a, float b) {
    return a+b;
}

float multiplicacao(float a, float b) {
    return a*b;
}

float divisao(float a, float b) {
    return a/b;
}

float subtracao(float a, float b) {
    return a-b;
}

float elevado(float a, float b) {
    return pow(a, b);
}

int main() {
    float a, b, resultado;
    char operacao;

    printf("Digite a conta ('Ex: 4 / 2'; use somente '+ - / x ^'): \n");
    scanf("%f %c %f", &a, &operacao, &b);

    if (operacao == '+') {
        resultado = soma(a, b);
    } else if (operacao == '-' ) {
        resultado = subtracao(a, b);
    } else if (operacao == '/') {
        resultado = divisao(a, b);
    } else if (operacao == 'x') {
        resultado = multiplicacao(a, b);
    } else if (operacao == '^') {
        resultado = elevado(a, b);
    } else printf("Por favor, digite no formato: 2 + 2. Utilizando somente (+, -, ;, x, ^).");

    printf("Resultado da conta: %0.2f", resultado);

    return 0;
}




