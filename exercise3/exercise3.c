
#include <stdio.h>

void main(){
	int age, secret_number, magic_number, x;
	
	printf("Introduce Magic Number: ");
	scanf("%d", &magic_number);
	
	secret_number = magic_number - ((magic_number / 10) * 10);
	
	age = ((magic_number + secret_number * 9) / 10);
	
	printf("Your afe is %d y the secret number is %d.", age, secret_number);
}
