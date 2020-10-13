
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void main(){
	char letter;
	
	printf("Please, enter a lowecase character: ");
	scanf ("%c", &letter);
	
	letter = toupper(letter);

    printf("The uppercase character is: %c.\n\n", letter);
    system("pause");
	
}
