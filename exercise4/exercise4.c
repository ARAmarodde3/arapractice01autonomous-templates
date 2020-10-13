
#include <stdio.h>

void main(){
	char fnf[30], ln1f[30], ln2f[30], fnm[30], ln1m[30], ln2m[30], fnh[30];
	
	printf("Father's full name\nFirst name: ");
	scanf("%s", &fnf);
	
	printf("Last name 1: ");
	scanf("%s", &ln1f);
	
	printf("Last name 2: ");
	scanf("%s", &ln2f);
	
	
	
	printf("\nMother's full name\nFirst name: ");
	scanf("%s", &fnm);
	
	printf("Last name 1: ");
	scanf("%s", &ln1m);
	
	printf("Last name 2: ");
	scanf("%s", &ln2m);
	
	
	
	printf("Son/Daughter's First name\nFirst name: ");
	scanf("%s", &fnh);
	
	
	
	printf("\nSon/Daughter's full name: %s %s %s", fnh, ln1f, ln1m);
}
