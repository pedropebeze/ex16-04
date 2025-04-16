#include <stdio.h>

int igual(int x,int y){
    
    if(x==y){
        return 1;
    }else{
        return 0;
    }
}

int main(){

    int a,b;
    puts("Digite o primeiro numero:");
    scanf("%d", &a);
    puts("Digite o segundo numero:");
    scanf("%d", &b);
    printf("%d\n",igual(a,b));

    return 0;
}