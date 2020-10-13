
#include <stdio.h>
#include <ctype.h>

void main(){
	char letter, next, previous;
	
	printf("Introduce a character: ");
	scanf("%c", &letter);
	
	previous = letter - 1;
	next = letter + 1;
	
	printf("Previous character to '%c' is '%c'.\nNext character to '%c' is '%c'.", letter, previous, letter, next);
}
