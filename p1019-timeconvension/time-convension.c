#include<stdio.h>
int main(){
    int  A;
    scanf("%d",&A);
    int hours=A/3600;
    int minutes=(A%3600)/60;
    int seconds=(A%3600)%60;
    printf("%d:%d:%d\n",hours,minutes,seconds);
}