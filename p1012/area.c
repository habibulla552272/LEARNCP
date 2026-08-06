#include<stdio.h>
int main(){

    float A,B,C;
    // printf("Enter the values of A, B and C: ");
    scanf("%f %f %f",&A,&B,&C);

    float area= (A*C)/2;
    printf("TRIANGULO: %.3f\n",area);
    area = (3.14159*C*C);
    printf("CIRCULO: %.3f\n",area);
    area=((A+B)*C)/2;
    printf("TRAPEZIO: %.3f\n",area);
    area=B*B;
    printf("QUADRADO: %.3f\n",area);
    area=A*B;
    printf("RETANGULO: %.3f\n",area);

    return 0;
}