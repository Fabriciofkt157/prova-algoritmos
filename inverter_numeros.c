
#include <stdio.h>

int main()
{
    int n, centenas, dezenas, unidades, resto;
    scanf("%d", &n);
    centenas = n / 100;
    resto = n % 100;
    dezenas = (resto / 10);
    unidades = resto % 10;
    
    n = centenas + dezenas * 10 + unidades * 100;
    printf("%d\n", n);
    return 0;
}
