#include <stdio.h>

int menor(int x,int y){
    
    if(x<y){
        return x;
    }else{
        return y;
    }
}

int main(){

    int a,b;
    puts("Digite o primeiro numero:");
    scanf("%d", &a);
    puts("Digite o segundo numero:");
    scanf("%d", &b);
    printf("%d\n",menor(a,b));

    return 0;
}