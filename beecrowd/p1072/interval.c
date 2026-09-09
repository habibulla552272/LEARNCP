#include <stdio.h>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int n,v,in=0,out=0;
    scanf("%d",&n);
    for(int i=0;i<=n-1;i++){
        scanf("%d",&v);
        if(v>=10&&v<=20){
            in=in+1;
        }else{
            out=out+1;
        }
    }
    printf("in %d\n",in);
    printf("out %d\n",out);

    return 0;
}