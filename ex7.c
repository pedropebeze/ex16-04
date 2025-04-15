#include <stdio.h>

float circ(double x){
	return 2*3.14*x;
}

int main(){
	
    float raio;
    scanf("%f",&raio);
	float d = circ(raio);
	printf("Circunferencia: %.2f\n",d);
	return 0;
}