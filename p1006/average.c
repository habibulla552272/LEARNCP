#include<stdio.h>
int main(){
    double A,B,C;
    scanf("%lf %lf %lf",&A,&B,&C);
    double average=(A*2+B*3+C*5)/10;
    printf("MIDIAN: %.1lf\n",average);
    return 0;
}