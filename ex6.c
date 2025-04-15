#include <stdio.h>

int diametro(double x){
	return x*2;
}

int main(){
	
    int raio;
    scanf("%d",&raio);
	int d = diametro(raio);
	printf("Diametro: %d",d);
	return 0;
}