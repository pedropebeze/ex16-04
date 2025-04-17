#include <stdio.h>
#include "util.h"

int main(){
	
    float raio;
    scanf("%f",&raio);
    float d = diametro(raio);
	printf("Diametro: %.2f\n",d);
    float c = circ(raio);
	printf("Circunferencia: %.2f\n",c);
	float a = area(raio);
	printf("Area: %.2f\n",a);
	return 0;
}
