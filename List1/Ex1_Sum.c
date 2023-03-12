/* 1) Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses
números. */

#include <stdio.h>

int main() {
    int n1, n2, n3, n4, sum;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    printf("Digite o terceiro número: ");
    scanf("%d", &n3);
    printf("Digite o quarto número: ");
    scanf("%d", &n4);

    sum = n1 + n2 + n3 + n4;
    printf("A soma deles é: %d\n", sum);
    return 0;
}