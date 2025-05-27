/*
NOME DO PROGRAMA: soma_e_multiplicacao_de_fracoes
QUESTÃO 6
NOME DO PROGRAMADOR: Fabricio Keltika Tanquella
*/
#include <stdio.h>

int main()
{
    int n1, d1, n2, d2, nS, dS, nM, dM;
    scanf("%d/%d %d/%d", &n1, &d1, &n2, &d2);
    
    if(d1 != d2){
        dS = d1 * d2;
        n1 = n1 * d2;
        n2 = n2 * d1;
    } 
    else
        dS = d1;
        
    nS = n1 + n2;
    
    printf("%d/%d\n", nS, dS);
    
    dM = d1 * d2;
    nM = n1 * n2;
    
    printf("%d/%d\n", nM, dM);
    
    return 0;
}
