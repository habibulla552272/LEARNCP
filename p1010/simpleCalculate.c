#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int a,b,c,d;
    float x,y;
    scanf("%d %d %f",&a,&b,&x);
    scanf("%d %d %f",&c,&d,&y);
    double total=(b*x)+(d*y);
    printf("VALOR A PAGAR: R$ %.2lf\n",total);
 
    return 0;
}