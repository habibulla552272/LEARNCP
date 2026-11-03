#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double n1,n2;
    scanf("%lf %lf",&n1,&n2);
    double result=(1+(n1/100))*(1+(n2/100))*100-100;
    
   printf("%.6lf\n",result);
    return 0;
}