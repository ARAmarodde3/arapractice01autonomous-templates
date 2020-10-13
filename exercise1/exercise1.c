
#include <stdio.h>
#include <math.h>

void main(){
	
	float gd, x1, x2, y1, y2;
	
	printf("Please, enter the coordinates of point x (x1 x2): ");
	scanf("%f%f", &x1, &x2);
	
	printf("Please, enter the coordinates of point y (y1 y2): ");
	scanf("%f%f", &y1, &y2);
	
	gd = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	
	printf("The geometrical distance between x(%f,%f) and y(%f,%f) is: %f", x1, x2, y1, y2, gd);
}
