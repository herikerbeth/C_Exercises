/* 1) Um funcionário de uma empresa recebe, anualmente, aumento salarial. Sabe-se que:
a) Esse funcionário foi contratado em 2015, com salário inicial de R$ 1.000,00.
b) Em 2016, ele recebeu aumento de 1,5% sobre seu salário inicial.
c) A partir de 2017 (inclusive), os aumentos salariais sempre corresponderam ao dobro do
percentual do ano anterior.
Faça um programa que determine o salário atual desse funcionário. */

#include <stdio.h>

int main() {
    float salarioInicial, aumento, salarioAtual; 
    salarioInicial = 1015;
    int ano = 2016;
    int anoAtual = 2017;

    while(ano < anoAtual) {
        aumento = (salarioInicial * 1.5) / 100;
        salarioAtual = salarioInicial + aumento;
        ano++;
    }
    printf("Salario atual R$ %.2lf\n", salarioAtual);
    return 0;
}