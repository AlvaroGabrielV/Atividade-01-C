#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float peso, gramas;
	
	printf("Qual o peso em KG: ");
	scanf("%f",&peso);
	
	gramas = peso * 1000;
	
	printf("\n");
	printf("O peso em gramas e: %.2fg",gramas);
	printf("\n");
	
	system("pause");
	
return 0;	
}
