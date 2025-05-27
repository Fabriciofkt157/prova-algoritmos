/*
NOME DO PROGRAMA: ultimo_digito
QUESTÃO 2
NOME DO PROGRAMADOR: Fabricio Keltika Tanquella
*/
#include <stdio.h>

int main()
{
    int a, ultimo;
    scanf("%d", &a);
    if(a <= 9 && a > -9) 
        ultimo = a;
    else 
        ultimo = a % 10;
    if(a < 0) 
        ultimo = -ultimo;
    printf("O ultimo digito de %d eh %d\n", a, ultimo);
    
    return 0;
}
