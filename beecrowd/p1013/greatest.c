
// Make a program that reads 3 integer values and present the greatest one followed by the message "eh o maior". Use the following formula:



// Input
// The input file contains 3 integer values.

// Output
// Print the greatest of these three values followed by a space and the message “eh o maior”.
#include<stdio.h>
int main(){

    int A,B,C;
    
    scanf("%d %d %d",&A,&B,&C);
    if(A>B && A>C){
        printf("%d eh o maior\n",A);

    }else if(B>A && B>C){
        printf("%d eh o maior\n",B);

    }else{
        printf("%d eh o maior\n",C);
    }

    return 0;
}