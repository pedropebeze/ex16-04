#include <stdio.h>
#include "igualdade.h"


int main(){

    int a,b;
    puts("Digite o primeiro numero:");
    scanf("%d", &a);
    puts("Digite o segundo numero:");
    scanf("%d", &b);
    if(igual(a,b)==1){
        printf("Iguais == Sim");
    }else{
        printf("Iguais == Não");
      printf("%d\n",menor(a,b));  
      printf("%d\n",maior(a,b)); 
    }

    return 0;
}
