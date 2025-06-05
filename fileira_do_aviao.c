/*
Nome do programa: fileira_do_aviao
Questão: 2
NOME DO PROGRAMADOR: Fabricio Keltika Tanquella
*/

#include <stdio.h>

int main() {
    int F, C, E, B;
    scanf("%d %d %d %d", &F, &C, &E, &B);

    int total_assentos = (F - E + 1) * C;

    if (B > total_assentos) {
        printf("PROXIMO VOO\n");
    } else {
        int fileira = E + (B - 1) / C;
        char letra = 'A' + (B - 1) % C;
        printf("%d %c\n", fileira, letra);
    }

    return 0;
}
