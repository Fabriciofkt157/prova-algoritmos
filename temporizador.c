/*
NOME DO PROGRAMA: temporizador
QUESTÃO 5
NOME DO PROGRAMADOR: Fabricio Keltika Tanquella
*/
#include <stdio.h>

int main()
{
    int sI, sF, mF, graus, resto;
    scanf("%d", &sI);
    graus = sI / 3600;
    resto = sI % 3600;
    printf("%d\n", resto);
    mF = resto / 60;
    printf("%d\n", resto);
    sF = resto % 60;
    printf("%d grau(s), %d minuto(s) e %d segundo(s)\n", graus, mF, sF);
    return 0;
}
