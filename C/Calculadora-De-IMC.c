#include <stdio.h>

float peso,altura,imc;

void perguntas() {
    printf("Qual é seu peso? ");
    scanf("%f", &peso);
    printf("Qual é sua altura? ");
    scanf("%f", &altura);
}

int main() {
    perguntas();
    imc = peso / (altura * altura);
    printf("Seu IMC é %.2f!\n", imc);
}