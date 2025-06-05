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
