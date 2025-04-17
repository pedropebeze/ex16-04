#include <stdio.h>
#include "igualdade.h"

int ent(void){
    int x;

    printf("digite um numero: ") ;
    scanf("%d", &x);
    return x;
}
int main(){
    int n1, n2, n3, a, b;
    n1 = ent();
    n2 = ent();
    n3 = ent();
        a = maior(n1, n2);
        b = maior(a, n3);
    if (a == 1)
    printf("Maior: %d\n", a);
    else
    printf("Maior: %d\n", b);

return 0;
}