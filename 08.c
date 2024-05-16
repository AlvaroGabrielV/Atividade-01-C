#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float celcius, fahrenheit;
	
	printf("Temperatura em Fahrenheit: ");
	scanf("%f",&fahrenheit);
	
	celcius = (fahrenheit - 32) / 1.8;
	
	printf("\n");
	printf("Temperatura em FAHRENHEIT: %.2f\n",fahrenheit);
	printf("Temperatura em CELCIUS: %.2f",celcius);

	
	system("pause");
	
return 0;	
}
