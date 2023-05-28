/*
1) Faça um programa que preencha uma matriz M(2 X 2), calcule e mostre a matriz R, 
resultante da multiplicação dos elementos de M pelo seu maior elemento.
*/

#include <stdio.h>

int main() {
    int matriz[2][2];
    int i, j;
    for ( i = 0; i < 2; i++ ) {
        for ( j = 0; j < 2; j++ ) {
            matriz[i][j] = i*j;
            
            printf("%d\n", matriz[i][j]);
        }
    }
    return 0;
}