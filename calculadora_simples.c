
#include <stdio.h>
#include <math.h>

int main()
{
    int n1, n2, r;
    char op;
    scanf("%d %c %d", &n1, &op, &n2);
    
    switch(op){
        case '+':
            r = n1 + n2;
            break;
        case '-':
            r = n1 - n2;
            break;
        case '*':
            r = n1 * n2;
            break;
        case '/':
            if(n2 == 0){
                printf("resultado indefinido: divisor = 0");
                return 0;
            }
            r = n1 / n2;
        case '%':
            r = n1 % n2;
            break;
        case '^':
            r = pow(n1, n2);
            break;
        default:
            printf("operador inválido");
            return 0;
    }
    printf("%d %c %d = %d", n1, op, n2, r);
    return 0;
}
