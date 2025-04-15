#include <stdio.h>

float area(double x){
	return 3.14*(x*x);
}

int main(){
	
    float raio;
    scanf("%f",&raio);
	float d = area(raio);
	printf("Area: %.2f\n",d);
	return 0;
}