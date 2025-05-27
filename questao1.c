/*
NOME DO PROGRAMA: soma simples
QUESTÃO 1
NOME DO PROGRAMADOR: Fabricio Keltika Tanquella
*/
#include <stdio.h>

int main()
{
    int a, b, s;
    scanf("%d %d", &a, &b);
    s = a + b;
    if(a < 0 || a > 9 || b < 0 || b > 9) 
        printf("números de entrada não permitidos");
    else
        printf("%d + %d = %d", a, b, s);
    

    return 0;
}
