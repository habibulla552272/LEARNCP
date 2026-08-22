#include<stdio.h>
int main(){
    int  X;
    float Y;
    scanf("%d %f",&X,&Y);
    double consumption=X/Y;
    printf("%.3lf km/l\n",consumption);

    return 0;
}