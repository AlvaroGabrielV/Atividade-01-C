ude <stdio.h>
#include <stdlib.h>

int main() {
	
	float raio, diametro, comprimento, circunferencia, area;
	float pi = 3.14;
	
	printf("Raio da circunferencia: ");
	scanf("%f",&raio);
	
	diametro = pi * 2;
	comprimento = pi * 2 * raio;
	area = pi * (raio*raio);
	
	printf("\n");
	printf("O diametro e: %.2f\n",diametro);
	printf("O comprimento e: %.2f\n",comprimento);
	printf("A area e: %.2f\n",area);
	printf("\n");
	
	system("pause");
	
return 0;	
}
