/*
NOME DO PROGRAMA: conversao_de_notas
QUESTÃO 9
NOME DO PROGRAMADOR: Fabricio Keltika Tanquella
*/
#include <stdio.h>

int main()
{
    int nota;
    scanf("%d", &nota);
    if(nota < 21)
        printf("Péssimo\n");
    else if(nota < 41)
        printf("Ruim\n");
    else if(nota < 61)
        printf("Regular\n");
    else if(nota < 81)
        printf("Bom\n");
    else
        printf("Excelente\n");
    return 0;
}
