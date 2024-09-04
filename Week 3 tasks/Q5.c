#include<stdio.h>
int main()
{
	float x1,y1,x2,y2,slope;
	printf("Enter the x coordinate of the first point %g\nThe coordinate should be in 3 decimal places\.", x1);
	scanf("%g", &x1);
	
	printf("Enter the y coordinate of the first point %g\nThe coordinate should be in 3 decimal places\.", y1);
	scanf("%g", &y1);
	
	printf("Enter the x coordinate of the second point %g\nThe coordinate should be in 3 decimal places\.", x2);
	scanf("%g", &x2);
	
	printf("Enter the y coordinate of the second point %g\nThe coordinate should be in 3 decimal places\.", y2);
	scanf("%g", &y2);
	
	slope=(y2-y1)/(x2-x1);
	
	printf("The slope of the two points is %g", slope);
}
