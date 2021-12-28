#include<stdio.h>
#include <stdlib.h>

int main() {
	char nameUser[10];
	double sum, sell, salary, commition;
	
	scanf("%s", nameUser);
	scanf("%lf", &salary);
	scanf("%lf", &sell);
	
	commition = sell*0.15;
	sum  = (salary + commition);
	
	printf("TOTAL = R$ %.2lf\n", sum);
	
	return 0;
}