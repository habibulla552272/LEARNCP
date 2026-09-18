#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

     int n;
     scanf("%d",&n);
     int notas[7]={100,50,20,10,5,2,1};
        printf("%d\n",n);
        for(int i=0;i<7;i++){
            int count=n/notas[i];
            n=n%notas[i];
            printf("%d nota(s) de R$ %d,00\n",count,notas[i]);
        }
 
    return 0;
}