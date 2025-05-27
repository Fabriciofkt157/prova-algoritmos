
#include <stdio.h>

int main()
{
    int n, n4, centenas, dezenas, unidades, resto;
    scanf("%d", &n);
    n4 = n * 10;
    centenas = n / 100;
    resto = n % 100;
    dezenas = (resto / 10);
    unidades = resto % 10;
    n4 += (centenas + dezenas * 3 + unidades * 5) % 7;
    if(n < 100 && n > 10)
        printf("0%d\n", n4);
    else if (n < 10)
        printf("00%d\n", n4);
    else
        printf("%d\n", n4);
    return 0;
}
