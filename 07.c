#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float comida, total;
	
	printf("Qual o peso em KG: ");
	scanf("%f",&comida);
	
	total = comida * 45;
	
	printf("\n");
	printf("O total a se pagar pela marmita e: R$%.2f",total);
	printf("\n");
	
	system("pause");
	
return 0;	
}
