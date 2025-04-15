#include <stdio.h>

void soma(int aux){
	
	printf("Resultado: %d",aux);
}

int main(){
	
	int n1,n2;
	scanf("%d",&n1);
	scanf("%d",&n2);
	soma(n1+n2);
	
	return 0;
}
