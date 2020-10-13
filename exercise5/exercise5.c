
#include <stdio.h>

void main(){
	int dividend, divisor, quotient, remainder;
	
	printf("Dividend: ");
	scanf("%d", &dividend);
	
	printf("Divisor: ");
	scanf("%d", &divisor);
	
	quotient = dividend / divisor;
	remainder = dividend - divisor * quotient;
	
	printf("\n\nQuotient: %d\nRemainder: %d", quotient, remainder);
}
