/* 2) Faça um programa que receba três notas de um aluno, calcule e mostre a média aritmética e a 
mensagem constante na tabela do Exercício 2. Aos alunos que ficaram para exame, calcule e mostre a 
nota que deverão tirar para serem aprovados, considerando que a média exigida é 6,0. */

#include <stdio.h>

int main() {
    float n1, n2, n3, mA, nMin;
    printf("Informe a nota 1: ");
    scanf("%f", &n1);
    printf("Informe a nota 2: ");
    scanf("%f", &n2);
    printf("Informe a nota 3: ");
    scanf("%f", &n3);

    mA = (( n1 + n2 + n3 ) / 3);

    if ( mA < 3 )
    {
        printf("Reprovado, nota: %.1f", mA);
    } else if ( mA < 7 )
    {
        nMin = 12 - mA;
        printf("Exame, nota %.1f. Para ser aprovado precisa tirar %.1f ou mais.", mA, nMin);
    } else {
        printf("Aprovado, nota %.1f", mA);
    }
    
    return 0;
}