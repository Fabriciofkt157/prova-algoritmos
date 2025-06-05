/*
Nome do programa: gasolina_ou_alcool
Questão: 1
NOME DO PROGRAMADOR: Fabricio Keltika Tanquella
*/


#include <stdio.h>

int main()
{
    float A, G, rA, rG;
    scanf("%f %f %f %f", &A, &G, &rA, &rG);
    if((A / rA) < (G / rG)) {
        printf("A\n");
    } else
        printf("G\n");
    return 0;
}
