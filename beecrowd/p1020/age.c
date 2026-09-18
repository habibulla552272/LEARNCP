#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int age;
    scanf("%d",&age);
    int years=age/365;
    int months =(age%365)/30;
    int days=(age%365)%30;
    printf("%d ano(s)\n",years);
    printf("%d mes(es)\n",months);
    printf("%d dia(s)\n",days);
    
    
 
    return 0;
}