/* 2) Faça um programa que leia um valor N inteiro e positivo. Calcule e mostre o valor de E, 
conforme a fórmula a seguir: 
E = 1 +1/1! +1/2! +1/3!+... +1/N! 
*/

#include <stdio.h>
#include <math.h>

int main() {
    int n, fat;
    double e = 1.0;

    printf("Digite um número: ");
    scanf("%d", &n);

    fat = 1;
    for(int i = 1; i <= n; i++) {
        fat *= i;
        e += 1.0 / fat;
    }
    
    printf("Valor de E: %.2lf", e);
    return 0;
}