#include <stdio.h>
#include <string.h>

int main() {

    int idade = 41 ;
    double salario = 4500.6, altura = 1.70;
    char genero = 'F';
    char nome[50] =  "Maria Silva";

    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2lf\n", salario);
    printf("ALTURA = %.2lf\n", altura);
    printf("GENERO = %c\n", genero);
    printf("NOME = %s\n", nome);

    return 0;
}
