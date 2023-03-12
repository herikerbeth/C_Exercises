/* Faça um programa que receba as três notas, calcule e mostre a média ponderada e o conceito
que segue a tabela: */

#include <stdio.h>

int main() {
    double trabalho, avaliac, exame, media;

    printf("Informe a nota do Trabalho de laboratório: ");
    scanf("%lf", &trabalho);
    printf("Informe a nota da Avaliação semestral: ");
    scanf("%lf", &avaliac);
    printf("Informe a nota do Exame final: ");
    scanf("%lf", &exame);

    media = ((trabalho * 2) + (avaliac * 3) + (exame * 5)) / 10;

    printf("Média ponderada: %.2lf\n", media);

    if(media < 5) {
        printf("Conceito E.\n");
    } else if( media < 6){
        printf("Conceito D.\n");
    } else if(media < 7) {
        printf("Conceito C.\n");
    } else if(media < 8) {
        printf("Conceito B.\n");
    } else {
        printf("Parabéns! Conceito A.\n");
    };

    return 0;
}